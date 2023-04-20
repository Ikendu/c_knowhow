#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	/**
	 * strtok divides the strings into tokens using a delimiter
	 */
	char *src = {"I am becoming greater and I can feel its"};
	char *str = malloc(sizeof(str));
	char *delim = " ";

	strcpy(str, src);	

	char *show = strtok(str, delim);
	while(show)
	{
		printf("%s\n", show);
		show = strtok(NULL, delim);
	}
	
	return (0);
}
