#include <stdio.h>
#include "3-calc.h"
/**
 * main - run the code
 * @argc: Number of command-line arguments passed
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*fun_ptr)(char *) = get_op_func;
	int (*fun_cmd)(int, int);
	int num_1;
	int num_2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (fun_ptr(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	fun_cmd = fun_ptr(argv[2]);
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	result = fun_cmd(num_1,num_2);
	printf("%i\n", result);
}
