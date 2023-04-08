#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b:pointing to a string of 0 and 1 chars
 * Return:the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val;

	if (b == NULL)  /* check if the string is NULL*/
		return (0);

	dec_val = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] < '0' || b[i] > '1')  /*check if each character is a binary digit*/
		return (0);

	dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
