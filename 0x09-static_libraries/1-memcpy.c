#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Memory stored here
 * @n: Bytes to copy
 * @src: Memory area
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int p = 0;
	int i = n;

	for (; p <  i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
