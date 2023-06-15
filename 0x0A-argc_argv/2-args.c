#include <stdio.h>
/**
 * main - Prints all arguments received by the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Description:
 *   This program prints all the arguments it receives, including the first one
 *   Each argument is printed on a separate line, and a new line is added after
 *   each argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
