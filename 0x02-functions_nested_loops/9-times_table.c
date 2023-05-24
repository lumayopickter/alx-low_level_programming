#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the multiplication table for 0 to 9,
 *              with each product separated by a comma and space.
 *              The numbers are aligned properly for readability.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j != 0)
				_putchar(',');

			if (result < 10 && j != 0)
				_putchar(' ');

			if (result >= 10)
				_putchar(result / 10 + '0');

			_putchar(result % 10 + '0');
		}

		_putchar('\n');
	}
}

