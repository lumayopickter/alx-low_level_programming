/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The difference between the ASCII values of the first non-matching
 * characters in s1 and s2, or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0')
  {
    if (*s1 != *s2)
      return *s1 - *s2;

    s1++;
    s2++;
  }

  return 0;
}

