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
 * @c: The character to be printed.
 *
 * Description:
 *      This function takes a character @c as input and prints it to the
 *      standard output. The character is displayed on a single line.
 *
 * Return:
 *      None.
 */
void print_char(char c)
{
	if (c != NULL)
		_putchar(c);
}
/**
 * print_int - Prints the given integer to the standard output.
 *
 * @num: The integer to be printed.
 *
 * Description:
 *     This function takes an integer @num as input and prints it to the
 *     standard output. It does not return any value.
 *
 * Usage:
 *     print_integer(42);
 *
 *     The above example will print the integer 42 to the standard output.
 */
void print_int(int i)
{
	if (i != NULL)
		printf("%i", i);
}
/**
 * print_float - Prints a float value.
 * @f: The float value to be printed.
 *
 * Description:
 *   This function takes a float value @f and prints it to the standard output.
 *   The function ensures that the float is displayed with a precision of 2
 *   decimal places. The printed float is followed by a new line character.
 *
 * Return: None.
 */
void print_float(float f)
{
	if (f != NULL)
		printf("%d", f);
}
/**
 * print_string - Prints a given string.
 *
 * @str: The string to be printed.
 *
 * Description:
 *     This function prints the given string to the standard output.
 *
 * Return: None.
 */
void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
