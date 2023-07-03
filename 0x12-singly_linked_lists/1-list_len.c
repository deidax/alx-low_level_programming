#include "lists.h"
/**
 * list_len - Calculate the length of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Description:
 *   The list_len function calculates the number of nodes in a linked list
 *   starting from the given head pointer. It traverses the list until it
 *   reaches the end, counting each node encountered. The function returns
 *   the total number of nodes in the list.
 *
 * Return:
 *   The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	for (; h != NULL; size++)
		h = h->next;
	return (size);
}
