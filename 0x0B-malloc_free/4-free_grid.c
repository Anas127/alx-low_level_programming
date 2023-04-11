#include "main.h"
#include <stdlib.>

/**
 * free_grid - frees a two dimensional grid
 * @grid: grid
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
