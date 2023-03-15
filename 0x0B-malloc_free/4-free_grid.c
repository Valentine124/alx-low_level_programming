#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free grid array
 *
 * @grid: grid to be freed
 *
 * @height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}

	free(grid);
}
