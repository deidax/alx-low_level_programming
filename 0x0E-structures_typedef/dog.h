#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to the name of the dog's owner.
 *
 * Description:
 *   This structure defines the attributes of a dog, including its name, age,
 *   and the name of its owner. It is used to store and manipulate data related
 *   to individual dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
