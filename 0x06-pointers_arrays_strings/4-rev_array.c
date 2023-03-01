#include "main.h"

/**
 * reverse_array - Reversing array of int
 * @a: The array
 * @n: Array's number of element
 *
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int r, t;

	for (r = 0; r < n--; r++)
	{
		t = a[r];
		a[r] = a[n];
		a[n] = t;
	}
}
