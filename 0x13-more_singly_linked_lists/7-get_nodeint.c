#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	
	for (; head != NULL && i != index; i++)
		head = head->next;
	if (head != NULL)
		return (head);
	return (NULL);
}
