#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Description:
 * This function allocates a 2D array of integers with the specified width
 * and height. Each element of the grid is initialized to 0.
 * If either @width or @height is 0 or negative, the function returns NULL.
 * On failure, the function also returns NULL.
 *
 * Return:
 * On success, returns a pointer to the allocated 2D array of integers.
 * On failure or if @width or @height is invalid, returns NULL.
 * The returned pointer should be freed using the free_grid() function when
 * it is no longer needed.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
	}
	return (ptr);
}

