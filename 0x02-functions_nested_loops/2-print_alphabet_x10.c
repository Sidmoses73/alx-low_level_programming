#include "main.h"

/**
 * print_alphabet_x10 - Print 10x the alphabets in lower case
 */

void print_alphabet_x10(void)
{
	char b;
	int i;

	i = 0;
	while (i < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		i++;
		_putchar('\n');
	}
}
