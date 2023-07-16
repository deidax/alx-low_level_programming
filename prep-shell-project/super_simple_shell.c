#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct command
{
        char *cmd;
        struct command *next;
} command;
void shell_prompt(char **cmd);
void *command_av(char **cmd);
command add_command(command **head, const *cmd);
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
			printf("%s", cmd);
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
void *command_av(command **head, char **cmd)
{
	char *token = "";
	char *delim = " '\n''\t'";

	token = strtok(*cmd, delim);
	add_command(&head, token);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		add_command(&head, token);
	}
}
command add_command(command **head, const *cmd)
{
        command *node = malloc(sizeof(command));

        if (node == NULL)
                return (NULL);
        node->cmd = strdup(cmd);
        if (node->cmd == NULL)
        {
                free(node->str);
                free(node);
                return (NULL);
        }
        node->next = *head;
        *head = node;
        return (*head);
}
