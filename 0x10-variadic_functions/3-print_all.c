#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @arg: The character to print.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The integer to print.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The float to print.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The string to print.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: List of types of arguments passed to the function.
 * @...: Variable number of arguments.
 *
 * Description: This function prints a series of arguments based on the
 * provided format string. The format string consists of characters specifying
 * the types of arguments that follow. The supported types are:
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string (if the string is NULL, it prints "(nil)")
 * Any other character is ignored. The function prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		switch (current_format)
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}

