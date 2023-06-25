#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variadic arguments representing the strings.
 *
 * Description:
 *     This function prints a variable number of strings, separated by the
 *     specified separator string. The number of strings to be printed is
 *     determined by the parameter n. It uses the printf function to perform
 *     the printing.
 *
 * Return: void
 *
 * Note:
 *     - If the separator is NULL, it is not printed.
 *     - If a string passed as an argument is NULL, "(nil)" is printed instead.
 *     - The function prints a new line at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list  args;
	unsigned int i = 0;
	char *tmp_s;

	if (n == 0 && separator != NULL)
		printf("%s", separator);
	else
	{
		va_start(args, n);
		for (i = 1; i <= n ; i++)
		{
			tmp_s = va_arg(args, char *);
			if (tmp_s == NULL)
			{
				printf("(nil)\n");
				break;
			}
			if (i < n && separator != NULL)
				printf("%s%s", tmp_s, separator);
			else
				printf("%s", tmp_s);
		}
	}
	printf("\n");
}
