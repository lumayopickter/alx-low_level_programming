/**
 * _memcpy - Copies memory area
 * @dest: The pointer to the destination memory
 * @src: The pointer to the source memory
 * @n: The number of bytes to copy
 *
 * Return: The pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  char *ptr = dest;

  while (n > 0)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }

  return ptr;
}

