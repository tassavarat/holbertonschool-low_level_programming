#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2-D array
 * @grid: 2-D array
 * @height: Dimensions of array
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(*(grid + (height - 1)));
		height--;
	}
	free(grid);
}
