#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: This function prints the elements of an integer array
 *              up to the specified number, separated by commas and a space.
 *              Order of printed numbers is same as they are stored in array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

	printf("%d", a[i]);

	if (i != n - 1)
	printf(", ");
	}

	printf("\n");
}

