#include "main.h"

/**
 * print_triangle - This print a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int o, p;

	for (o = 1; o <= size; o++)
	{
	for (p = o; p < size; p++)
	{
		_putchar(' ');
	}

	for (p = 1; p <= o; p++)
	{
		_putchar('#');
	}

		_putchar('\n');
	}
	}
}
