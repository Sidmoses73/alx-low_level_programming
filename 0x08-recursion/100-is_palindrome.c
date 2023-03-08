#include "main.h"

int look_pal(char *s, int j, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - This will checks if a string is a palindrome
 * @s: The string to reverse string to reverse
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (look_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - The length of a string
 * @s: Calculate the length of this
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * look_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @len: length of the string
 * @j: The iterator
 *
 * Return: 1 if palindrome, 0 if not
 */
int look_pal(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (look_pal(s, j + 1, len - 1));
}
