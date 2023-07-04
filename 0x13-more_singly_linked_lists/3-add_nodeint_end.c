#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The int to be stored in the new node.
 *
 * Description:
 *      The add_nodeint_end function creates a new node with the provided int
 *      and appends it at the end of the linked list pointed to by @head. If
 *      @head is NULL, the new node becomes the head of the linked list.
 *      The function returns a pointer to the modified linked list.
 *
 * Return:
 *      - On success, a pointer to the modified linked list.
 *      - If memory allocation fails or strdup fails, it returns NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tmp_node = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (tmp_node == NULL)
	{
		*head = node;
		return (*head);
	}
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = node;
	return (tmp_node);
}
