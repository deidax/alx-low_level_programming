#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i <=9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			for (k = j; k <= 9; k++)
			{
				putchar(k + '0');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
