#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	char *token = "";
	char *delim = " '\n''\t'";

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		if (getline(&line, &bufsize, stdin) == -1)
			break;
		token = strtok(line, " ");
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, delim);
		}
	}
	free(line);
	return (0);
}
