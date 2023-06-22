#include "function_pointers.h"
/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description:
 *      This function takes an array, its size, and a function pointer as
 *      parameters. It executes the specified function on each element of the
 *      array. The array elements are accessed using a pointer, and the size
 *      parameter determines the number of elements in the array.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
