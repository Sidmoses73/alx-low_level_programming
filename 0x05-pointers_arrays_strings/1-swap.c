#include "main.h"

/**
 * void swap_int - Write a function that swaps the values of two integers.
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
