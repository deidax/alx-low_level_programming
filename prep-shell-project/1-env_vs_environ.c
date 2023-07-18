#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[],char **env)
{
	printf("@env %p\n", env);
	printf("@environ %p\n", environ);

	return (0);
}
