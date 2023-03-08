#include "main.h"

/**
 * puts_recursion - Function that prints a string
 * @*s: String to print
 */

void _puts_recursion(char *s)

{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
}
