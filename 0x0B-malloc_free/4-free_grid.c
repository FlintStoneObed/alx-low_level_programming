#include "main.h"

/**
 * free_grid - deallocates memory for a 2 dimension array and sets the grid
 * @grid: pointer to the 2 dimension array
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	grid = NULL;
}
