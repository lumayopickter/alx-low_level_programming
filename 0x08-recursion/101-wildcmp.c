#include "main.h"

/**
 * wildcmp - Compares strings and returns 1 if they be considered identical
 * @s1: First string
 * @s2: Second string (may contain the special character '*')
 *
 * Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}

