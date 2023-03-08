#include "main.h"

/**
 * _pow_recursion - Function that return value of x
 * raise to power y
 * @x: input value to raise
 * @y: input value power
 * Return: Result
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
