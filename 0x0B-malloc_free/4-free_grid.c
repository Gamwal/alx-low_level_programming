#include "main.h"

/**
 * free_grid - program frees a 2D array of integers
 * @grid: the 2D array of integer to be freed
 * @height: the height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
