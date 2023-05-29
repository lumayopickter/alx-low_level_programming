#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 *
 * Description: This function prints the second half of a given string.
 * If the length of the string is odd, it prints the last (length - 1) / 2
 * characters. If the length is even, it prints the last length / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for printing */
	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;

	/* Print the second half of the string */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

