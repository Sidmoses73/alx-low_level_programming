#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: This input
 * @accept: This is also input
 *
 * Return: 0 Success;
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				n++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
