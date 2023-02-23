#include "main.h"

/**
 * print_numbers - Print digits (0 through 9).
 *
 * Return: Always 0.
 */

void print_numbers(void)

{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
