#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - the function that frees a 2 dimensional
 * @grid: set the two array dymensions
 * @height: this parameter set the height
 * Reutrn: is void
 **/

void free_grid(int **grid, int height)
{
int i = 0;

	if (grid == NULL)
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
