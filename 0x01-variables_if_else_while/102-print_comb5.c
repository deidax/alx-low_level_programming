#include <stdio.h>
/**
 * main - Program to print all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, mn, ln;
	int counter = 0;

	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (j > i)
			{
				mn = i / 10;
				ln = i % 10;
				putchar(mn + '0');
				putchar(ln + '0');
				mn = j / 10;
				ln = j % 10;
				putchar(' ');
				putchar(mn + '0');
				putchar(ln + '0');
				counter++;
				if (counter < 4950)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
