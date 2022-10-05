#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: size of each array
 * @height: size of the 2d array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
