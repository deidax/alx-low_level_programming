#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed
 *
 * Description: This function recursively display `s`
 *              in reverse order until it reaches the null terminator ('\0').
 *              correct the following codeIt does not return a value.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
