#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *         starting with the first character, followed by a new line
 *
 * @str: The input string
 *
 * Description: This function prints every other character of the given string,
 *              starting with the first character, and ends with a new line.
 *              It assumes that the input string is null-terminated.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

