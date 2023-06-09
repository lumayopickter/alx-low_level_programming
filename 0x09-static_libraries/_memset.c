/**
 * _memset - Fills a block of memory with a specific byte
 * @s: The pointer to the block of memory
 * @b: The byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the block of memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
  char *ptr = s;

  while (n > 0)
  {
    *s = b;
    s++;
    n--;
  }

  return ptr;
}

