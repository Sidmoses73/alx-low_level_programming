#include "main.h"

/**
 * _islower - A function that search for lower character
 * @c: The character to check
 * Return: 1 if int c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
