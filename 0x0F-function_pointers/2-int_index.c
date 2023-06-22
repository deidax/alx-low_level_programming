#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Description:
 *     This function searches for an integer in the array @array by
 *     applying the comparison function @cmp to each element. It returns
 *     the index of the first element for which the @cmp function does not
 *     return 0. If no element matches the condition, it returns -1.
 *     If the @size parameter is less than or equal to 0, it also returns -1.
 *
 * Return:
 *     The index of the first element for which the @cmp function does not
 *     return 0. If no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
