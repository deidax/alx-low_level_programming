#include <stdio.h>
/**
 * print_array - Prints n elements of an integer array.
 * @a: The input array.
 * @n: The number of elements to be printed.
 *
 * Description:
 *   This function prints the first n elements of the input array of integers,
 *   followed by a new line. The numbers are separated by a comma and a space.
 *   The function uses printf to display the numbers in the same order as they
 *   are stored in the array.
 *
 * Example:
 *   Input: a = [10, 20, 30, 40, 50], n = 3
 *   Output: "10, 20, 30\n"
 *
 * Note:
 *   - If n is greater than the number of elements in the array, all elements
 *     of the array will be printed.
 *   - If n is 0 or negative, nothing will be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
