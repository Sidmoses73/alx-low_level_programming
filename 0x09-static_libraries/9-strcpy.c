#include "main.h"

/**
 * char *_strcpy -This is a function that copies the string pointed to by src
 * @dest: copy this to
 * @src: copy this from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int l = 0;
	int a = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; a < l ; a++)
	{
		dest[a] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
