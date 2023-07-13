#include <stdio.h>
#include <unistd.h>

int main (void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	int val = execve(argv[0], argv, NULL);
	
	if (val == -1)
		perror("Error\n");
	printf("Done with Execve!\n");

	return (0);
}
