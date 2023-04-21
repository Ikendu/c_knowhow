#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	/**
	 * strtok divides the strings into tokens using a delimiter
	 */
	/* char str[] = {"I am becoming greater and I can feel its"};
	 * no strcpy()
	 */

	char *src = {"I am becoming greater and I can feel its"};
	char *str = malloc(sizeof(char)* strlen(src));
	char *delim = " ";
	int argc = 0;

	strcpy(str, src);	

	char *show = strtok(str, delim);
	while(show)
	{
		printf("%s\n", show);
		show = strtok(NULL, delim);
		argc++;
	}
	printf("Number of words is %d\n", argc); 
	
	
	return (0);
}
