#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: The character to chech
 * Return: 1 if c is a letter or 0 else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
