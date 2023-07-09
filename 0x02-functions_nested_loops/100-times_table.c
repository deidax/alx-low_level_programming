#include <stdio.h>
void print_times_table_recursive(int n, int i, int k)
{
	if (n > 15 || n < 0)
		return;

	if (i <= n)
	{
		if (k <= n)
		{
			printf("%i", i * k);
			if (k != n)
				printf(",   ");
			print_times_table_recursive(n, i, k + 1);
		}
		else
		{
			printf("\n");
			print_times_table_recursive(n, i + 1, 0);
		}
	}
}

void print_times_table(int n)
{
	print_times_table_recursive(n, 0, 0);
}
