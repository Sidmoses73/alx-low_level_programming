#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The entry point
 * @a: The input
 * @size: Another input
 *
 * Return: 0 Success
 */

void print_diagsums(int *a, int size)

{
	int total1, total2, z;

	total1 = 0;
	total2 = 0;

	for (z = 0; z < size; z++)
	{
		total1 = total1 + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		total2 += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", total1, total2);
}
