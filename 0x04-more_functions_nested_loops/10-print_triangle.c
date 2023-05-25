#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: Size of the triangle
 *
 * Description: This function prints a triangle using the '#' character.
 *              The size parameter determines number of rows in triangle.
 *              If size is 0 or less, it prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

