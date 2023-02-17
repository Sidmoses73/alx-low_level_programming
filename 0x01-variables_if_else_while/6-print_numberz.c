#include <stdio.h>

/**
 * main - Program that prints base ten numbers
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	putchar('\n');

	return (0);

}
