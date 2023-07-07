#include "main.h"
#include <limits.h>
/**
 * flip_bits - Counts the number of bits that need to be flipped to
 *             convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return:
 *   The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xored = 0UL;
	int counter = 0;

	if (n > ULONG_MAX || m > ULONG_MAX)
		return (-1);
	xored = (n ^ m);
	/* Using Brian Kernighan's Algorithm to the number of set bits */
	while (xored > 0)
	{
		xored &= (xored - 1);
		counter++;
	}
	return (counter);

}
