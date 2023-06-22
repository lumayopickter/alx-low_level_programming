#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of arguments (strings).
 *
 * Description: This function prints a series of strings separated by the
 * provided separator string. The number of strings to be printed is specified
 * by the parameter n, followed by the actual strings as variadic arguments.
 * If the separator is NULL, it is not printed. If a string is NULL, it prints
 * (nil) instead. The function prints a new line at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

