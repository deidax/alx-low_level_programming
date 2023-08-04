#include "main.h"
/**
 * get_endianness - Determine the endianness of the system.
 *
 * Description:
 *      The get_endianness function checks the endianness of the system
 *      by examining the value of the first byte of an integer variable.
 *
 * Return:
 *      The value of the first byte of an integer, indicating the endianness.
 */
int get_endianness(void)
{
	unsigned int n = 93;
	char *k = (char *)&n;

	return (*k);
}
