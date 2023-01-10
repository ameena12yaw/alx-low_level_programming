#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid created in alloc_grid
 * @grid: pointer to pointer
 * @height: height of grid
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
