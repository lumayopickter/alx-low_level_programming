#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 * Description: This function calculates the sum of the main diagonal and
 *              the secondary diagonal of a square matrix and prints them.
 *              The matrix is represented as a 1D array of integers.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i]; /* Sum of the main diagonal */
		sum2 += a[(size - 1) * (i + 1)]; /* Sum of the secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}

