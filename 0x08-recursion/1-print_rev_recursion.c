#include "main.h"

/**
 * _print_rev_recursion - Print in reverse
 * @s: The input
 *
 * Return: 0 Success
 */

void _print_rev_recursion(char *s)

{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
