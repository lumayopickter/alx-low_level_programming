/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Description:
 * This function calculates the length of a string by iterating through the
 * characters until it reaches the null terminator.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

