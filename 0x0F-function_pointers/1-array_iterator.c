#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that execute a function and print elements
 * @size:Size of the array
 * @action:Pointer to the function
 * @array:An array
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))


{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
