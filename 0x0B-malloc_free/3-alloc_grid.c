#include "main.h"
#include <stdlib.h>
/**
 * *alloc_grid - allocates memory for 2d array
 * *@width: expects number of rows
 * *@height: expects number of columns
 * *Return: returns the pointer to memory location if successful
  */
int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = malloc(sizeof(int *) * height);

	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(sizeof(int) * width);

		if (array2d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array2d[i]);

			free(array2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array2d[i][j] = 0;
	}

	return (array2d);
}
