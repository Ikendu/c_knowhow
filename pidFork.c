#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid_t pd, ppid;

	printf("Before fork is called\n");

	pid = fork();
	ppid = getppid();

	if(pid == -1)
	{
		printf("unsuccessfull\n");
		return (0);
	}
	if (pid == 0)
	{
		sleep(10);
		printf("This is the child\n");
		pd = getpid();
		printf("%u\n", pid);
		return (0);
	}
	else
	{
		printf("%u is the process ID\n", ppid);
		wait(NULL);
		return (0);
	}

	printf("After fork was called\n");
	return (0);
}
