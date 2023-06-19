#include <stdio.h>
/**
 * main - Prints the name of the file it was compiled from.
 *
 * Description:
 *   This program prints the name of the file it was compiled from,
 *   followed by a new line. It utilizes the __FILE__ predefined macro
 *   provided by the C standard library to retrieve the file name.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
