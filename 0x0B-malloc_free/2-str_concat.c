#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string (s1 + s2)
 *         NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	concatenated = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < s2_len; j++)
		concatenated[i++] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

