#include "lists.h"
/**
 * sum_listint - Sums the integer values in a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * This function traverses a singly linked list of integers, adding up all the
 * integer values contained in the nodes. If the list is empty (i.e., the head
 * is NULL), the function returns 0.
 *
 * Return: The sum of all the data (n) of a listint_t linked list. If the list
 * is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
