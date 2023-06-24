#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of parameters.
 * @...: Variable number of arguments.
 *
 * Description:
 *     This function calculates the sum of all its parameters. The first
 *     argument @n specifies the number of parameters passed. If @n is 0,
 *     the function returns 0.
 *
 * Return:
 *     The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
