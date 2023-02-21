#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natural number from n - 98
 * with new line
 * @n: Print from this number
 */

void print_to_98(int n)
{
	int c, d;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c != 98)
				printf("%d,", c);
			else if (c == 98)
				printf("%d\n", c);
		}
	} else if (n >= 98)
	{
		for (d = n; d >= 98; d--)
		{
			if (d != 98)
				printf("%d, ", d);
			else if (d == 98)
				printf("%d\n", d);
		}
	}
}
