#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free up a 2D grid
 *@grid: pointer to 2d
 *@height: Height of grid
 *
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
