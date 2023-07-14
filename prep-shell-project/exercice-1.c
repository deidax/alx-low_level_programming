#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid = 0;
	int i;
	int cmd_st = 0;
	char *cmd[] = {"/bin/ls", "-l", "/tmp", NULL};

	for(i = 0; i< 5 ; i++)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Process error");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			printf("Child process %d\n", getpid());
			printf("---------------\n");
			cmd_st = execve(cmd[0], cmd, NULL);
			if (cmd_st == -1)
				perror("Command ERROR\n");
		}
		else
		{
			wait(NULL);
		}
	}
	return (0);
}
