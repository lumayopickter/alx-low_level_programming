#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The bytes to search for
 *
 * Return: The pointer to the first occurrence in s of any of the bytes in
 * accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
  while (*s != '\0')
  {
    if (_strchr(accept, *s) != NULL)
      return s;

    s++;
  }

  return NULL;
}

