#include "main.h"

/**
 * _puts - Function that prints string followed
 * by new line
 * @str: The string to print
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_put(*str++);
	}
	_put('\n');
}
