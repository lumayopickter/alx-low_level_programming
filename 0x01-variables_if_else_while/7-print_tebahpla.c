#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = z; c >= a; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return 0;
}

