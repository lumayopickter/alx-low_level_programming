/**
 * _strncpy - Copies up to n bytes of source string to destination string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If src has fewer than n characters, pad dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

