#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Description:
 *      The add_node_end function creates a new node with the provided string
 *      and appends it at the end of the linked list pointed to by @head. If
 *      @head is NULL, the new node becomes the head of the linked list.
 *      The function returns a pointer to the modified linked list.
 *
 * Return:
 *      - On success, a pointer to the modified linked list.
 *      - If memory allocation fails or strdup fails, it returns NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tmp_node = *head;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (tmp_node == NULL)
	{
		*head = node;
		return (*head);
	}
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->next = node;
	return (tmp_node);
}
