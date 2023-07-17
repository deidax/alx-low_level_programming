#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	char *path;
	char *token;
	char filepath[1024];
	int i;
	struct stat st; 

	if (argc < 2)
	{
		printf("Usage: %s filename ...\n", argv[0]);
		return (1);
	}
	path = getenv("PATH");
	if (path == NULL)
	{
		printf("Error: PATH variable could not be found\n");
		return (1);
	}
	token = strtok(path, ":");
	while (token != NULL)
	{
		for (i = 0; i < argc; i++)
		{
			snprintf(filepath, sizeof(filepath), "%s/%s", token, argv[i]);
			if (stat(filepath, &st) == 0 && S_ISREG(st.st_mode))
			{
				printf("%s\n", filepath);
			}
		}
		token = strtok(NULL, ":");
	}
	return (0);
}
