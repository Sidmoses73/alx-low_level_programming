#include "main.h"
/**
* _isupper - This checks for uppercase character
* @c: This is the variable text
* Return: 0 (Success)
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

