#include <stdio.h>

/**
 * main - A program that write single digit in base ten
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int numbers;

	for (numbers = '0'; numbers < 10; numbers++)
		printf("%d", numbers);

	printf("\n");

	return (0);
}
