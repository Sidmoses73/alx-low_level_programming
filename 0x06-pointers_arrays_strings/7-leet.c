#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int c, d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[c] == s1[d])
			{
				n[c] = s2[d];
			}
		}
	}
	return (n);
}
