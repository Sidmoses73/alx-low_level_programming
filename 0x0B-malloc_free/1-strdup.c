#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory location
 *
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *xyz;

	int i, q = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	xyz = malloc(sizeof(char) * (i + 1));

	if (xyz == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)

		xyz[q] = str[q];
	return (xyz);
}

