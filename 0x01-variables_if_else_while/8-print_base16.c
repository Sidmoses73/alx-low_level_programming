#include <stdio.h>

/**
 * main - Print number in base 16
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int numb;
	char i;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
