#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop for grid
 * @width: input
 * @height: input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pie;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	pie = malloc(sizeof(int *) * height);

	if (pie == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		pie[x] = malloc(sizeof(int) * width);

		if (pie[x] == NULL)

		{
			for (; x >= 0; x--)

				free(pie[x]);
			free(pie);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pie[x][y] = 0;
	}
	return (pie);
}
