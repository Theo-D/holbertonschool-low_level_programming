#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees a grid previously created in alloc_array()
 *@grid: The grid to be freed.
 *@height: The height of the given grid.
 *
 *Return: The grid, freed.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
