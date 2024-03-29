#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a index specific in a linked
 * @head: Pointer to the head of the linked.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be assigned to the new node.
 *
 * Return: Pointer the to newly inserted node, or if NULL the.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *right_node = NULL;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (current != NULL)
	{
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (*head);
		}
		else if (i == idx)
		{
			if (current->next == NULL)
			{
				current->next = new_node;
				return (new_node);
			}
			right_node = current->next;
			current->next = new_node;
			new_node->next = right_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
