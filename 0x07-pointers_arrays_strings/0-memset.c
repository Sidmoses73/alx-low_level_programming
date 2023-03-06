#include "main.h"

/**
 * _memset - A  function that fills memory with a constant byte
 * @s: The starting address to be filled
 * @b: This is the desired value
 * @n: Byte to be changed
 *
 * Return: Change this array with new value of n
 */
char *_memset(char *s, char b, unsigned int n)


{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
