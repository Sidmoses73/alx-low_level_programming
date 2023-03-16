#include "main.h"

/**
 * malloc_checked - Allocate memory using this
 * @b: Number of byte allocated
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
