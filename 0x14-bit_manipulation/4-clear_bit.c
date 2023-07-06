#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which the bit is to be cleared.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits = sizeof(unsigned long int) * 8;

	if (index >= max_bits)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

