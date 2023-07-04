#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	
	if (h == NULL)
		return (0);
	for (; h != NULL; size++)
		h = h->next;
	return (size);
}
