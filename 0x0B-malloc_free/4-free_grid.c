#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the 2 dimensional grid to be freed.
 * @height: The height of the grid.
 *
 * Description:
 *   This function frees the memory allocated for a 2 dimensional grid
 *   created by the alloc_grid function. It takes the pointer to the grid
 *   and the height of the grid as input.
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
