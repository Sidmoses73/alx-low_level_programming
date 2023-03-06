#include "main.h"

/**
 * _strpbrk - This is the entry point
 * @s: An input
 * @accept:An input
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{

			if (*s == accept[a])
			return (s);
			}
		}
		s++;


	return ('\0');
}
