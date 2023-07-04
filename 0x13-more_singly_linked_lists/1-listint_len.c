#include "lists.h"
/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * This function traverses a linked list, counting the number of elements
 * until it reaches the end of the list (where the next pointer is NULL).
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; size++)
		h = h->next;
	return (size);
}
