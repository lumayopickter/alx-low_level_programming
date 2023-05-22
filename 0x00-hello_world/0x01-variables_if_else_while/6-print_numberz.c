#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 *              starting from 0, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

