#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to a string representing the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to a string representing the owner of the dog.
 *
 * Description:
 *   This function creates a new dog by allocating memory for the dog structure
 *   and storing a copy of the name and owner strings. The age of the dog is set
 *   to the provided age. If the function fails to allocate memory, it returns
 *   NULL.
 *
 * Return: Pointer to the newly created dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog = malloc(sizeof(dog_t));
        if (new_dog == NULL)
                return (NULL);

        new_dog->name = strdup(name);
        if (new_dog->name == NULL)
        {
                free(new_dog);
                return (NULL);
        }

        new_dog->age = age;

        new_dog->owner = strdup(owner);
        if (new_dog->owner == NULL)
        {
                free(new_dog->name);
                free(new_dog);
                return (NULL);
        }

        return (new_dog);
}
