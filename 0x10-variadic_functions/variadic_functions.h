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

void (*get_format_func(const char * const s, int i))(va_list)
{
	char *opt_char = "cifs";
	void (*opt_cmd[])(va_list) = {print_char, print_int, print_float, print_string};
	const char *s_ptr;
	
	while (*opt_char != '\0')
	{
		s_ptr = s;
		while (*s_ptr != '\0')
		{
			if (*opt_char == *s_ptr)
			{
				return (opt_cmd[i]);
			}
			s_ptr++;
		}
		opt_char++;
	}
	return (NULL);
}
#endif
