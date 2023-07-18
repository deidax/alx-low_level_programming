#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *path = getenv("PATH");
	char *token;

	token = strtok(path, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}
