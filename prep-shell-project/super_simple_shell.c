#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell_prompt(char **cmd);
char *command_av(char **cmd);

int main(void)
{
	char *cmd = NULL;
	char *tokens = NULL;
	while (1)
	{
		shell_prompt(&cmd);
		if (cmd != NULL)
		{
			printf("%s", cmd);
			tokens = command_av(&cmd);
			printf("%s", tokens);
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
char *command_av(char **cmd)
{
	char *token = "";
	char *delim = " '\n''\t'";

	token = strtok(*cmd, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
	}
	return token;
}
