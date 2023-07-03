#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be added as a new node.
 *
 * Description:
 *      The add_node function creates a new node and adds it at the beginning
 *      of a linked list. The string @str is duplicated using strdup, and the
 *      length of the string is calculated using strlen. The new node becomes
 *      the new head of the list, and the previous head is set as its next node
 *
 * Return:
 *      Pointer to the newly added node (new head of the list).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	if (*head == NULL)
		return (NULL);
	return (*head);
}
