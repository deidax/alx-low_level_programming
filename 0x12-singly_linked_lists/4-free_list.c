#include "lists.h"
/**
 * free_list - Frees the memory occupied by a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Description:
 *   The free_list function traverses the linked list starting from the
 *   provided head pointer and frees the memory allocated for each node
 *   and its associated string.
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next = NULL;

	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
