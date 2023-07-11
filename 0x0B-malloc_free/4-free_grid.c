#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
