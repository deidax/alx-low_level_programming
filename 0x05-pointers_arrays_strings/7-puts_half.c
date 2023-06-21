#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description:
 *   This function prints the second half of the input string,
 *   followed by a new line. If the number of characters in the
 *   string is odd, it prints the last (length_of_the_string - 1) / 2
 *   characters. The function calculates the length of the string
 *   using pointer arithmetic and then determines the starting position
 *   for printing the second half.
 *
 *   Example:
 *   Input: "Hello, World!"
 *   Output: "World!"
 *
 *   Note:
 *   If the input string is empty or contains only one character,
 *   the function prints the entire string.
 */
void puts_half(char *str)
{
    int length = 0;
    char *ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    if (length > 1)
    {
        int start = (length - 1) / 2;

        ptr = str + start;

        while (*ptr != '\0')
        {
            _putchar(*ptr);
            ptr++;
        }
    }
    else
    {
        ptr = str;
    }

    _putchar('\n');
}

