#include <stdlib.h>

/**
 * free_grid - free a 2d array
 * @grid: 2d array
 * @height: rows in 2d array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
