#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long n, unsigned long m)
{
	int i, count = 0;
	unsigned long now;
	unsigned long exclusive = n ^ m;
	unsigned int num_bits = sizeof(unsigned long) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		now = exclusive >> i;
		if (now & 1)
			count++;
	}

	return (count);
}

