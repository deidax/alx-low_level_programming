#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
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
}
/**
 * print_char - Prints a character to the standard output.
 *
 * @n: The number of integers passed to the function (will be 1).
 * @...: Variable number of arguments containing char.
 *
 * Description:
 *	This function prints a char
 */
void print_char(const unsigned int n, ...)
{
	int i = 0;
	va_list args;
	char v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char);
		if (v != NULL)
		_putchar(v);
	}
}
/**
 * print_int - Prints the given integer to the standard output.
 *
 *
 * @n: The number of integers passed to the function (will be 1).
 * @...: Variable number of arguments containing integers.
 *
 */
void print_int(const unsigned int n, ...)
{
	int i = 0;
	va_list args;
	int v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
		if (v != NULL)
		printf("%i", v);
	}
}
/**
 * print_float - Prints a float value.
 *
 * @n: The number of integers passed to the function (will be 1).
 * @...: Variable number of arguments containing float
 *
 * Description:
 *	This function prints a float
 *
 * Return: None.
 */
void print_float(const unsigned int n, ...)
{
	int i = 0;
	va_list args;
	float v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, float);
		if (v != NULL)
			printf("%d", v);
	}
}
/**
 * print_string - Prints a given string.
 *
 * @n: The number of integers passed to the function (will be 1).
 * @...: Variable number of arguments containing float
 *
 * Description:
 *     This function prints the given string to the standard output.
 */
void print_string(const unsigned int n, ...)
{
	int i = 0;
	va_list args;
	char *v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char *);
		if (v != NULL)
			printf("%s", v);
		else
			printf("(nil)");
	}
}
