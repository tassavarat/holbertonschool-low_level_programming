#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2-D array
 * @grid: 2-D array
 * @height: Dimensions of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(*(grid + i));
	free(grid);
}
