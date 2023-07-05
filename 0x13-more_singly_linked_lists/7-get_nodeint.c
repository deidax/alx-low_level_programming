#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at the specified index
 * @head: Pointer to of head the the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the specified index, or if NULL the index is
 *         out of bounds or the linked list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
