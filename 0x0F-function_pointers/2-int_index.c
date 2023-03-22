#include "function_pointers.h"

/**
 * int_index - Function that search for integer
 * @size:Number of element in array
 * @cmp:Pointer to the function used
 * @array:The array
 *
 * Return:0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
