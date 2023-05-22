#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *              using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

