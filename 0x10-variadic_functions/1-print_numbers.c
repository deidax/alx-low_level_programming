#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of arguments containing integers.
 *
 * Description:
 *      This function prints a variable number of integers, separated by the
 *      provided separator string. The number of integers to be printed is
 *      specified by the parameter n. If the separator is NULL, it won't be
 *      printed. At the end of the function, a new line is printed.
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list  args;
	unsigned int i = 0;
	int tmp_n = 0;

	if (n == 0 && separator != NULL)
		printf("%s", separator);
	else
	{
		va_start(args, n);
		for (i = 1; i <= n ; i++)
		{
			tmp_n = va_arg(args, int);
			if (i < n && separator != NULL)
				printf("%i%s", tmp_n, separator);
			else
				printf("%i", tmp_n);
		}
	}
	printf("\n");
}
