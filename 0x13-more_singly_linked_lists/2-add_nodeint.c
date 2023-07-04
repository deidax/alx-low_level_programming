#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the list.
 * @n: The integer to be included in the new node.
 *
 * This function creates a new node, sets its 'n' value to the integer 'n',
 * and its 'next' pointer to the current head of the list. The head pointer
 * is then updated to point to the new node.
 *
 * Return: Pointer to the new head of the list, or NULL if the node couldn't
 * be added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
