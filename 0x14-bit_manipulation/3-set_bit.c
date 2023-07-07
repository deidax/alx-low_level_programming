#include "main.h"
#include <limits.h>
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n > ULONG_MAX || index > 64)
		return (-1);
	return ((1 << index) | *n);
}
