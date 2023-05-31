#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize first letter if it's a lowercase letter */
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= 'a' - 'A';

	/* Iterate through the string */
	for (i = 1; str[i] != '\0'; i++)
	{
	/* Capitalize letter after separators */
	if (
	str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
	str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
	str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
	str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
	str[i - 1] == '}' ||
	str[i - 1] == '\0'
	)
		{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		}
	}

	return (str);
}

