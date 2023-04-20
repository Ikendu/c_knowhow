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

	//this function create child process from parents
	//sleep is used to make some part of code wait for other part 
	//before execution
	//This prevents situations like sumbi of orphan child

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
