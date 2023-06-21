#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Description:
 *   This program adds positive numbers as command line arguments.
 *   It prints the sum of the numbe. If no number is passed
 *   to the program, it prints 0, followed by a new line. If any
 *   of the numbers contain symbols that are not digits,
 *   it prints "Error" followed by a new line, and returns 1.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	int len;
	char *c;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		len = strlen(c);
		for (j = 0; i < len; j++)
		{
			if (isdigit(*(c+1)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (sum);
}
