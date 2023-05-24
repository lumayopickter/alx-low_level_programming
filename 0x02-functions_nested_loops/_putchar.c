#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, return the character written.
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

