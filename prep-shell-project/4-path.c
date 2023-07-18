#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct path
{
	char *dir;
	struct path *next;
} path;
path *add_path(path **head, const char *dir)
{
	path *node = malloc(sizeof(path));

	if (node == NULL)
		return (NULL);
	node->dir = strdup(dir);
	if (node->dir == NULL)
	{
		free(node->dir);
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (*head);
}
size_t print_dirs(const path *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->dir == NULL)
			printf("0 (nil)\n");
		else
		{
			printf("-> %s\n", h->dir);
		}
		h = h->next;
	}
	return (size);
}
int main(void)
{
	path *head = NULL;
	char *p = getenv("PATH");
	char *token;

	token = strtok(p, ":");
	while (token != NULL)
	{
		add_path(&head, token);
		token = strtok(NULL, ":");
	}
	print_dirs(head);
	return (0);
}
