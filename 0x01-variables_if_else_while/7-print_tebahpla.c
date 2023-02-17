#include <stdio.h>

/**
 * main - Printing in reverse order
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);

	putchar('\n');

	return (0);
}
