#include <stdio.h>
void print_times_table(int n)
{
	int i = 0;

	if (n > 15 || n < 0)
		return;
	printf("%i,\t", n * 0);
	print_times_table(n - 1);
	for (; i < n; i++)
	{
		printf("%i,\t", n * i);
	}
	printf("\n");
}
