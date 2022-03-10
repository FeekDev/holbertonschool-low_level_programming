#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: the parameter send the files of grid
 * @height: the parametr send the columns of grid
 * Return: this return void
 **/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)/*check the size*/
	{
		return (NULL);
	}

	grid = malloc(height * (sizeof(int *)));/*allocate memory for rows*/

	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * (sizeof(int)));/*allocate columns for rows*/
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)/*set values in the array bidimensional*/
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
