#include "main.h"
#include <limits.h>
/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: Pointer to the unsigned long int variable.
 * @index: The index of the bit to clear.
 *
 * Return:
 *   1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || *n > ULONG_MAX || index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
