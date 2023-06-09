/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src
 *
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
  char *ptr = dest;

  while (*dest != '\0')
    dest++;

  while (*src != '\0' && n > 0)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }

  *dest = '\0';

  return ptr;
}

