/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string
 * @accept: The characters to include in the prefix substring
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int count = 0;
  int match;

  while (*s != '\0')
  {
    match = 0;

    while (*accept != '\0')
    {
      if (*s == *accept)
      {
        count++;
        match = 1;
        break;
      }

      accept++;
    }

    if (!match)
      break;

    s++;
  }

  return count;
}

