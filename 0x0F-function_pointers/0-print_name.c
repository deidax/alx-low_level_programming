#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to a function that prints the name.
 *
 * Description:
 *      This function takes a name and a function pointer as parameters.
 *      It calls the function pointed to by @f, passing the name ,
 *      which prints the name according to a specific format or behavior.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
