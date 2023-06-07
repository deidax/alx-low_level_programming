#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Description:
 * This function calculates the length of the string @s recursively by
 * counting the number of characters until it reaches the null terminator.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
