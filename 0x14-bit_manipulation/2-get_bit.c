#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit at the given index, or - 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

/* Make sure the index is not greater than the maximum bit index of 63*/
	if (index > 63)
	{
	return (-1);
	}

/* Shift the number to the right by the index*/
	bit_val = (n >> index) & 1;

	return (bit_val);
}
