#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of arguments (integers).
 *
 * Description: This function prints a series of numbers separated by the
 * provided separator string. The number of integers to be printed is specified
 * by the parameter n, followed by the actual integers as variadic arguments.
 * If the separator is NULL, it is not printed. The function prints a new line
 * at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

