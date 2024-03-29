#include "main.h"
#include <limits.h>
/**
 * get_bit - Returns the value of a bit at a given index in a number.
 * @n: The number.
 * @index: The index of the bit to retrieve.
 *
 * Return:
 *   The value of the bit at the given index (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n > ULONG_MAX || index > 64)
		return (-1);
	return ((n >> index) & 1);
}
