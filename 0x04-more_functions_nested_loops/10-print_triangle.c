#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle using the '#' character.
 * The size parameter determines the number of rows in the triangle.
 * If the size is 0 or less, it only prints a new line.
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
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

