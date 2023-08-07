#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees 2 arrays
* @grid: 2d grid
* @height: height of grid
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid);
}
