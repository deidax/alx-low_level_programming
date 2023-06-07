#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which factorial is calculated.
 *
 * Description:
 * This function calculates the factorial of the number @n recursively.
 * The factorial of a non-negative integer n is the product of all positive
 * integers less than or equal to n.
 * If @n is less than 0, the function returns -1 to indicate an error.
 * The factorial of 0 is defined as 1.
 *
 * Return: The factorial of @n, or -1 if an error occurs.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
