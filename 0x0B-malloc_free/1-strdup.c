#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory containing
 *           a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure, NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	/* Copy the original string to the duplicate string */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

