#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from a given integer to 98, inclusive.
 * @n: An integer representing the starting point for printing.
 *
 * Returns: 0
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}
	printf("%i, ", n);
	if (n < 98)
		print_to_98(n + 1);
	else
		print_to_98(n - 1);
}
