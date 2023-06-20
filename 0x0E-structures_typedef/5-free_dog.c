#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description:
 *   This function releases the memory allocated for a dog structure.
 *   It takes a pointer to the dog structure as input and frees the
 *   memory associated with it, including the memory for the name and
 *   owner strings. After calling this function, the dog structure is
 *   no longer valid and should not be accessed.
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	free(d);
}
