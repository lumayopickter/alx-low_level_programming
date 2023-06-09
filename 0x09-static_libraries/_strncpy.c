/**
 * _strncpy - Copies a string, using at most n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes
 *
 * Return: The pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
  char *ptr = dest;

  while (*src != '\0' && n > 0)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }

  while (n > 0)
  {
    *dest = '\0';
    dest++;
    n--;
  }

  return ptr;
}

