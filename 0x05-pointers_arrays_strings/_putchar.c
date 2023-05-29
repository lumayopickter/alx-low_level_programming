#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Description:
 * This function writes a single character to the standard output (stdout).
 * It uses the `write` system call to perform the write operation.
 *
 * Return: On success, returns the number of characters written.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

