#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: the two dimensional grid
 * @height: height of the grid
 *
 * Return:
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (index = 0; index < height; index++)
	{
		free(grid[(height - 1) - index]);
	}
	free(grid);
}
