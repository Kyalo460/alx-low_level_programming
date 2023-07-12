#include "main.h"
#include <stdlib.h>
/**
 * *free_grid - Frees a 2d array
 * *@grid: expects 2d array
 * *@height: number of rows
  */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
