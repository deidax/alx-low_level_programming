#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Description:
 *   This program multiplies two numbers provided as command line arguments.
 *   The result of the multiplication is printed, followed by a new line.
 *   The program expects exactly two arguments: the two numbers to be multi.
 *   If the program does not receive two arguments, it prints "Error",
 *   followed by a new line, and returns 1.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
