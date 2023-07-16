#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
int main(void)
{
	char *cmd = NULL;
	char *tokens = NULL;
	command *head = NULL;
	while (1)
	{
		shell_prompt(&cmd);
		if (cmd != NULL)
		{
			command_av(&head, &cmd);
			free(cmd);
		}
	}
}
void shell_prompt(char **cmd)
{
	char *line = NULL;
	size_t buf_size = 0;

	printf("$ ");
	fflush(stdout);
	if (getline(&line, &buf_size, stdin) == -1)
		return;
	*cmd = malloc(strlen(line) + 1);
	if (*cmd != NULL)
		strcpy(*cmd, line);
	free(line);
}
void command_av(command **head, char **cmd)
{
	char *token = "";
	char *delim = " '\n''\t'";

	token = strtok(*cmd, delim);
	if (token != NULL)
		add_command(head, token);
	print_command(*head);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		if (token != NULL)
			add_attribute(*head, token);
	}
}
void add_attribute(command *cmd, const char *attr)
{
	attribute *node = malloc(sizeof(attribute));

	if (node == NULL)
		return;
	node->attr = strdup(attr);
	if (node->attr == NULL)
	{
		free(node->attr);
		free(node);
		return;
	}
	node->next = cmd->attrs;
	cmd->attrs = node;
}
command *add_command(command **head, const char *cmd)
{
        command *node = malloc(sizeof(command));

        if (node == NULL)
                return (NULL);
        node->cmd = strdup(cmd);
        if (node->cmd == NULL)
        {
                free(node->cmd);
                free(node);
                return (NULL);
        }
	node->attrs = NULL;
        node->next = *head;
        *head = node;

        return (*head);
}
size_t print_command(const command *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->cmd == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
		{
			printf("-> %s\n", h->cmd);
			print_attributes(h->attrs);
			printf("--------\n");
		}
		h = h->next;
	}
	return (size);
}
size_t print_attributes(const attribute *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->attr == NULL)
			printf("(nil)\n");
		else
			printf("... %s\n", h->attr);
		h = h->next;
	}
	return (size);
}
