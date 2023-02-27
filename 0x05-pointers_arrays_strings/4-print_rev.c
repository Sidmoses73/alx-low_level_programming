#include "main.h"

/**
 * print_rev - Function that prints a string
 * n reverse, followed by a new line.
 * @s: String to print
 *
 * Return 0 Success
 */

void print_rev(char *s)

{
	int length = 0;
	int a;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (a = length; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
