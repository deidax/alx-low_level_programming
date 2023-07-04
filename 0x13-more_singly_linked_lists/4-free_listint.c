#include "lists.h"
/**
 * free_listint - Frees the memory occupied by a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description:
 *   The free_listint function traverses the linked list starting from the
 *   provided head pointer and frees the memory allocated for each node
 *   and its associated string.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next = NULL;

	if (current == NULL)
		return;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
