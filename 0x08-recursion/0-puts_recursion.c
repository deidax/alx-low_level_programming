#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed
 *
 * Description:
 * This function recursively prints each character of the string @s until it
 * reaches the null terminator ('\0'), and then prints a new line character.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}
