#include <stdio.h>
void print_times_table(int n)
{
	int i , k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			printf("%i,\t", i * k);
		}
		printf("\n");
	}

}
