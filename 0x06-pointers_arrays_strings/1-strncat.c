/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy at most n bytes from src to the end of dest */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}

