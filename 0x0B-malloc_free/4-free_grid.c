#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees up the memory occupied by a 2d array of integers
 * @grid: The 2d array
 * @height: size of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
