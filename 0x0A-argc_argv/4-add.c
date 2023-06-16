#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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

	if (argc <= 1)
	{
		printf("%d", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	return (sum);
}
