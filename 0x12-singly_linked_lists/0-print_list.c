#include "lists.h"
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description:
 *      The print_list function traverses a linked list and prints each
 *      element along with its length. If an element is NULL, it is printed
 *      as "(nil)". The function returns the number of elements in the list.
 *
 * Return:
 *      The number of elements in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
