#include "main.h"

/**
 * string_toupper - Change all lowercase to upper
 * @p: pointer
 *
 * Return: p
 */

char *string_toupper(char *p)
{
	int t;

	t = 0;
	while (p[t] != '\0')
	{
		if (p[t] >= 'a' && p[t] <= 'z')
			p[t] = p[t] - 32;
		t++;
	}
	return (p);

}
