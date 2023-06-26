#include <string.h>
#include <stdio.h>
#include <stdarg.h>
void (*get_format_func(char c))(va_list);
int get_format(const char * const format);
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
	int num_args;
	va_list a;
	va_list copy;
	void (*fun_format)(va_list);
	char f_c;
	int i = 0;

	num_args = get_format(format);
	va_start(a, format);
	va_copy(copy, a);
	while (i < num_args)
	{
		f_c = format[i];
		if (f_c == 'c' || f_c == 'i' || f_c == 'f' || f_c == 's')
		{
			fun_format = get_format_func(f_c);
			fun_format(copy);
			if (i < (num_args - 1))
				printf(", ");
		}
		i++;
	}
	va_end(a);
	if (num_args > 0)
		printf("\n");
}
