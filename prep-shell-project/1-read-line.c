#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		if (getline(&line, &bufsize, stdin) == -1)
			break;
		printf("%s", line);
	}
	free(line);
	return (0);
}
