#include <stdlib.h>
#include <string.h>
/**
 * free_grid - frees allocated memory.
 * @grid : pointer to memory block.
 * @height : row of 2D array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = height; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}


