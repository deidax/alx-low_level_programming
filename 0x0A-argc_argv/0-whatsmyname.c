#include "main.h"
/**
 * main - Prints the name of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Description:
 *   This program prints the name of the program, followed by a new line.
 *   It utilizes the command line arguments to retrieve the program name.
 *   If the program is renamed, it will automatically print the new name
 *   without requiring recompilation. The program ensures that the path
 *   before the name of the program is not removed in the output.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];
	int i;

	(void) argc;
	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
	_putchar('\n');	
	return (0);
}
