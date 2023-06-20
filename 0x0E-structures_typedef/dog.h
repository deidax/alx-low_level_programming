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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
