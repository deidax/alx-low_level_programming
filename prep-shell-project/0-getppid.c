#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid = getppid();
	printf("Parent PID: %d\n", pid);
	return (0);
}
