#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: The pointer to the beginning of the substring within the string,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
  while (*haystack != '\0')
  {
    char *start = haystack;
    char *pattern = needle;

    while (*pattern != '\0' && *haystack == *pattern)
    {
      haystack++;
      pattern++;
    }

    if (*pattern == '\0')
      return start;

    haystack = start + 1;
  }

  return NULL;
}

