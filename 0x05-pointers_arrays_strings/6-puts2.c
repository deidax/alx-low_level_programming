#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 *
 * Description:
 *   This function prints every other character of the input string,
 *   starting with the first character. It prints the characters to
 *   the standard output, followed by a new line.
 *
 *   Example:
 *   Input: "Hello, World!"
 *   Output: "HloWrd"
 *
 *   Note:
 *   If the input string is empty, the function does nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar((*str) + i);
	_putchar('\n');
}

