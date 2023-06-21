#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: Pointer to the struct dog variable.
 * @name: Pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to the name of the dog's owner.
 *
 * Description:
 *   This function initializes a struct dog variable with provided values
 *   for its name, age, and owner. It takes a pointer to the struct dog
 *   variable as input and assigns the values to its attributes.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

