#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - freeeeee
 * description: up the grid
 * @grid: the grid
 * @height: how tall
 * @x: int
 * return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
		free(grid);
}
