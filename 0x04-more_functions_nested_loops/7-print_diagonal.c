#include "main.h"

/**
 * print_diagonal - This will draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)

{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int c, d;

	for (c = 0; c < n; c++)
	{
	for (d = 0; d < n; d++)
	{
	if (c == d)
	_putchar('\\');
	else if (d < c)
	_putchar(' ');
	}

	_putchar('\n');
	}
	}

}
