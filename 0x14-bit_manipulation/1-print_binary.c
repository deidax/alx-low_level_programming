#include "main.h"
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
			if ((m & 1) != 0)
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
