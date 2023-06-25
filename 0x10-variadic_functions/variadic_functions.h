#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#ifndef NULL
#define NULL ((void *)0)
#endif
#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
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
	unsigned int i = 0;
	va_list args;
	char v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
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
	unsigned int i = 0;
	va_list args;
	int v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
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
	unsigned int i = 0;
	va_list args;
	float v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, double);
		printf("%f", v);
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
	unsigned int i = 0;
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
/**
 * get_format_func - Returns a pointer to a function based on the format.
 *
 * @s: The format string.
 *
 * Description:
 *   The get_format_func function takes an operator string @s as input and
 *   returns a pointer to a function that corresponds to the provided
 *   format.
 *
 * Return:
 *   Pointer to a function that performs the format corresponding to @s.
 */

void (*get_format_func(const char * const s))(const unsigned int n, ...)
{
	char *opt_char = "cifs";
	void (*opt_cmd[])(const unsigned int n, ...) = {print_char, print_int, print_float, print_string};
	int c = 0;

	while (*opt_char != '\0')
	{
		if (*opt_char == *s && s[1] == '\0')
			return (opt_cmd[c]);
		c++;
		opt_char++;
	}
	return (NULL);
}
#endif
