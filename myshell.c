#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char *cmd = NULL, *cmd_cpy = NULL, *token = NULL;
	char *delim = " \n";
	size_t n = 0;
	int argc = 0, i = 0;
	char **argv = NULL;

	printf("$ ");

	if (getline(&cmd, &n, stdin) == -1)
		return -1;

	cmd_cpy = strdup(cmd);
	
	token = strtok(cmd, delim);
	while (token)
	{
		token = strtok(NULL, delim);
			argc++;
	}
	printf("%d\n", argc);


/*	while (cmd[i])
	{
		if (cmd[i] == '\n')
			printf(" we have %ld character here", strlen(cmd));
		else
			printf("%c", cmd[i]);
		i++;
	}
*/
	return (0);
}
