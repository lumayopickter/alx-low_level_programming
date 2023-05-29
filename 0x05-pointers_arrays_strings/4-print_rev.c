#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The input string
 *
 * Description: This function takes a string as input and prints it in reverse
 * order, followed by a new line character ('\n').
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse */
	for (length -= 1; length >= 0; length--)
		_putchar(s[length]);

	_putchar('\n');
}

