#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Description:
 *   This function dynamically allocates an array of chars with the given size.
 *   Each element of the array is initialized with the specified char.
 *
 * Return:
 *   On success, returns a pointer to the created array.
 *   On failure or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
