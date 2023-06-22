#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Description:
 *   This function takes two integers, @a and @b, and returns their sum.
 *
 * Return:
 *   The sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description:
 *    subtracts the second integer (@b) from the first integer (@a)
 *    and returns the difference.
 *
 * Return:
 *    The difference between @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Description:
 *   This function takes two integers, @a and @b, and returns their product.
 *
 * Return:
 *   The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Performs integer division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Description:
 *      This function divides the integer @a by the integer @b and returns the
 *      result of the division. The function assumes that @b is not zero.
 *
 * Return:
 *      The result of the division of @a by @b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Description:
 *     This function takes two integers, @a and @b, and computes the remainder
 *     of @a divided by @b. The result is returned as an integer.
 *
 * Return:
 *     The remainder of the division of @a by @b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}

