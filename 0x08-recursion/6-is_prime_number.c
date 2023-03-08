#include "main.h"

int look_prime(int, int);
/**
 * is_prime_number - Is a number prime number
 * @n: Theinput  number to evaluate
 *
 * Return: 1 if input is a prime number
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	return (look_prime(n, n - 1));
}

/**
 * look_prime - Check prime numbers
 * @j: It iterate
 * @n: The number
 *
 * Return: 1 or 0
 */

int look_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (look_prime(n, j - 1));
}
