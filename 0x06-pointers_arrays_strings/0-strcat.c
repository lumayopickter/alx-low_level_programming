/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy the src string to the end of dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}

