#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print.
 *
 * Description: Prints the multiplication table from 0 to n.
 * Each row represents a number, and each column represents the result
 * of multiplying that number by values from 0 to n.
 * If n is greater than 15 or less than 0, the function does not print anything.
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;

			if (column != 0)
				_putchar(',');
			if (result < 10 && column != 0)
				_putchar(' ');
			if (result < 100)
				_putchar(' ');
			if (result >= 100)
				_putchar('0' + (result / 100));
			if (result >= 10)
				_putchar('0' + ((result / 10) % 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}

