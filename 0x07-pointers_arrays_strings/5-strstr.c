#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the main string
 * @needle: Pointer to the substring
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *search;

	while (*haystack)
	{
		start = haystack;
		search = needle;

		while (*haystack && *search && *haystack == *search)
		{
			haystack++;
			search++;
		}

		if (!*search)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

