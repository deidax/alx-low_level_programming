#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#ifndef NULL
#define NULL ((void *)0)
#endif
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * print_char - Prints a character to the standard output.
 *
 * @args: args to be printed
 *
 * Description:
 *	This function prints a char
 */
void print_char(va_list args)
{
	char v;

	v = va_arg(args, int);
	printf("%c", v);
}
/**
 * print_int - Prints the given integer to the standard output.
 *
 * @args: args to be printed
 *
 */
void print_int(va_list args)
{
	int v;

	v = va_arg(args, int);
	printf("%i", v);
}
/**
 * print_float - Prints a float value.
 *
 * @args: args to be printed
 *
 * Description:
 *	This function prints a float
 *
 * Return: None.
 */
void print_float(va_list args)
{
	float v;

	v = va_arg(args, double);
	printf("%f", v);
}
/**
 * print_string - Prints a given string.
 *
 * @args: args to be printed
 *
 * Description:
 *     This function prints the given string to the standard output.
 */
void print_string(va_list args)
{
	char *v;

	v = va_arg(args, char *);
	if (v != NULL)
		printf("%s", v);
	else
		printf("(nil)");
}
/**
 * get_format - Get the length of a format string.
 * @format: The format string.
 *
 * Description:
 *   This function calculates the length of the format string @format.
 *   If the format string is NULL, the function returns 0.
 *
 * Return:
 *   The length of the format string, or 0 if @format is NULL.
 */
int get_format(const char * const format)
{
	if (format == NULL)
		return (0);
	return (strlen(format));
}
/**
 * get_format_func - Returns a pointer to a function based on the format.
 *
 * @c: The format string.
 *
 * Description:
 *   The get_format_func function takes an operator string @s as input and
 *   returns a pointer to a function that corresponds to the provided
 *   format.
 *
 * Return:
 *   Pointer to a function that performs the format corresponding to @s.
 */

void (*get_format_func(char c))(va_list)
{
	char opt_char[] = "cifs";
	void (*opt_cmd[])(va_list) = {
		print_char, print_int, print_float, print_string
	};
	int i = 0;

	while (opt_char[i] != '\0')
	{
		if (opt_char[i] == c)
		{
			return (opt_cmd[i]);
		}
		i++;
	}
	return (NULL);
}
#endif
