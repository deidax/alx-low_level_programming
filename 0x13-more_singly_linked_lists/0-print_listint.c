#include "lists.h"
/**
 * print_listint - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * This function traverses a linked list, counting the number of elements
 * until it reaches the end of the list (where the next pointer is NULL).
 *
 * Return: The number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; size++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (size);
}
