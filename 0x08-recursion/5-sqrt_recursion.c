#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - The natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - Find the natural square root
 * @n: number to calculate the sqaure root
 * @j: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_sqrt(n, j + 1));
}
