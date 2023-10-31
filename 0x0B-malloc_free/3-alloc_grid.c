#include "main.h"
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the 2 dimension of integers, NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid, col;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (col = 0; col < height; col++)
	{
		grid[col] = (int *) malloc(width * sizeof(int));

		if (grid[col] == NULL)
		{
			while (col >= 0)
			{
				free(grid[col]);
				col--;
			}
			free(grid);
			return (NULL);
		}
		memset(grid[col], 0, width * sizeof(int));
	}
	return (grid);
}
