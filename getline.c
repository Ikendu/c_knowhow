#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;

	//char *buff = NULL
	//this allocate a whole line of 120 characters
	char *buff = malloc(sizeof(size_t));
	printf("Enter your name\n");
	getline(&buff, &n, stdin);
	printf("The name is %sBuffer size is %lu\n", buff, n);
	free(buff);

	return (0);
}
			
