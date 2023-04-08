#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	/* Check if the index is valid */
	if (index > 63)
	return (-1);

	/* Create a bitmask that clears the bit at the given index */
	bitmask = ~(1UL << index);

	/* Apply the bitmask to the number to clear the bit at the given index */
	*n &= bitmask;

	/* Return success */
	return (1);
}
