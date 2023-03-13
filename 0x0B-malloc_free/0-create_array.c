#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create arraqys of chars and initialise
 * with spcific character
 * @size: unsigned int size of array
 * @c: The char to assign
 *
 * Return: Pointer to array or null if it fails
 */

char *create_array(unsigned int size, char c)

{
	char *str;

	unsigned int index;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);


	for (index = 0; index < size; index++)

		str[index] = c;

	return (str);
}
