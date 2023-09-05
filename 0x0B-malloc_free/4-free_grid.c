#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *	previously allocated by alloc_grid
 * @grid: the grid
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
