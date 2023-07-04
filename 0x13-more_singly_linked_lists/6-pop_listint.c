#include "lists.h"
/**
 * pop_listint - Removes the head node of a linked list and returns its data.
 * @head: Double pointer to the head node of the linked list.
 *
 * This function removes the head node of a linked list of integers,and returns
 * the integer data stored in the removed node. If the linked list is empty,the
 * function returns 0. The function also frees the memory of the removed node.
 *
 * Return: The integer data of the removed node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *deleted_node = NULL;
	int tmp_n = 0;

	if (current == NULL)
		return (0);
	tmp_n = current->n;
	deleted_node = current;
	current = current->next;
	deleted_node->next = NULL;
	free(deleted_node);
	*head = current;
	return (tmp_n);
}
