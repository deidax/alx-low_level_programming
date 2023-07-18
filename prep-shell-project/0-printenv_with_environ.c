#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(void)
{
	char **env_ptr = environ;

	while (*env_ptr != NULL)
	{
		printf("%s\n", *env_ptr);
		env_ptr++;
	}
	return (0);
}
