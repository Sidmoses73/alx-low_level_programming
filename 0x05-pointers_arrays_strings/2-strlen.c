#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 * @s: This is a string
 * Return: Length
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
