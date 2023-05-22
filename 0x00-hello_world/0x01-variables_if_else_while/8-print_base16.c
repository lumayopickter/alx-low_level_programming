#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 *              without using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digits[] = "0123456789abcdef";

	write(1, hex_digits, sizeof(hex_digits) - 1);
	write(1, "\n", 1);

	return (0);
}

