#include <stdio.h>
/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Description:
 *   This program prints the number of arguments passed into it.
 *   It takes into account the command line arguments provided when
 *   executing the program. The result is printed as a number followed
 *   by a new line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", (argc - 1));
	return (0);
}
