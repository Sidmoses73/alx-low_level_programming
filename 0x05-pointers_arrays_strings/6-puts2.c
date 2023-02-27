#include "main.h"

/**
 * puts2 - Print starting with the first character
 * @str: This is input
 * Return: Print
 */

void puts2(char *str)

{
	int length = 0;
	int y = 0;
	char *z = str;
	int o;

	while (*z != '\0')
	{
		z++;
		length++;
	}
	y = length - 1;
	for (o = 0; o <= y; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');

}
