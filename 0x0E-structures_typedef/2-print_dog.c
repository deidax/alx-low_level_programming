#include <stdio.h>
#include "dog.h"
#ifndef NIL
#define NIL (a) do { printf(a ": (nil)"); }while(0)
#endif
/**
 * print_dog - Prints the content of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description:
 *   This function prints the content of a struct dog in a specific format.
 *   It takes a pointer to the struct dog as input. If the struct or any of
 *   its elements is NULL, it prints (nil) instead of the NULL value.
 *   If the pointer to the struct dog is NULL, it does not print anything.
 *
 * Return: None.
 *
 * Format of the output:
 *   Name: <dog's name>
 *   Age: <dog's age>
 *   Owner: <dog's owner>
 *
 * Example:
 *   struct dog my_dog = {"Buddy", 3.5, "John"};
 *   print_dog(&my_dog);
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(d->name == NULL)
		NIL("Name");
}
