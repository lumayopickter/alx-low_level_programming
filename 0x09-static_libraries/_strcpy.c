/**
 * _strcpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
  char *ptr = dest;

  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }

  *dest = '\0';

  return ptr;
}

