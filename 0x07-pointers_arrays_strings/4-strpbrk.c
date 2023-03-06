#include "main.h"

/**
 * _strpbrk - This is the entry point
 * @s: An input
 * @accept:An input
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int q;

		while (*s)
		{
			for (q = 0; accept[q]; q++)
			{
			if (*s == accept[q])
			return (s);
			}
		s++;
		}

	return ('\0');
}

