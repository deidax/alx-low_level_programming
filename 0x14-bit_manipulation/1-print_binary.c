#include "main.h"
/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed.
 *
 * Description:
 *      The print_binary function takes an unsigned long integer @n and prints
 *      its binary representation to the standard output using putchar. It
 *      iterates through each bit of the integer starting from the most
 *      significant bit and prints '1' or '0' accordingly. If @n is 0 or 1, it
 *      directly prints the corresponding character. The function also keeps
 *      track of the rightmost bit found using the RMBF (rightmost bit found)
 *      flag.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned int m = 32768;
	int RMBF = 0; /* right most bite found ? */

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (m > 0)
		{
			if ((m & n) != 0)
			{
				_putchar('1');
				RMBF = 1;
			}
			else if (RMBF)
			{
				_putchar('0');
			}
			m >>= 1;
		}
	}
}
