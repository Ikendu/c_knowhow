#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
	/**
	 * execve - for executing command line statements
	 * fork is added to use wait
	 */
	pid_t pid = fork();

	char *argv[] = {"/bin/ls", NULL}; 

	if (pid == 0)
	{
		int var = execve(argv[0], argv,  NULL);
       		if (var == -1)
                perror("Not found\n"); 
       }
	else
	{
		//wait add to make sure the printout show
		//if-else statement is also used
		wait(NULL);
		printf("We are done\n");
	}
           
	return (0);
}
