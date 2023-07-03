#include "lists.h"

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
	while (tmp_node != NULL)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->next = node;
	*head = tmp_node;
	return (*head);
}
