#include "main.h"

/**
 * _strchr - This is the entry point
 * @s: This is input
 * @c: This is input
 * Return: 0 Success
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
