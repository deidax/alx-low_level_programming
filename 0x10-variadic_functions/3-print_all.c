#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 *          'c' for char, 'i' for integer, 'f' for float, 's' for char *.
 *
 * Description:
 *      This function prints the corresponding argument based on the format.
 *      If the format is 'c', it prints a char.
 *      If the format is 'i', it prints an integer.
 *      If the format is 'f', it prints a float.
 *      If the format is 's', it prints a string. If the string is NULL, it
 *      prints (nil) instead.
 *      Any other character in the format is ignored.
 *      The function uses a maximum of 2 while loops and 2 if statements.
 *      It declares a maximum of 9 variables.
 *      It is allowed to use the printf function.
 *      A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
	int num_args = strlen(format);
	va_list args;
	void (*fun_format)(const unsigned int n, ...);
	int i;

	va_start(args, format);
	for (i = 0; i < num_args; i++)
	{
		fun_format = get_format_func(format);
		fun_format(1, args);
		printf(", ");
	}
	printf("\n");
}
