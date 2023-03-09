#include <stdio.h>

int strPrint(char *str);

main()
{
	char str[] =  {"Pointing to a given function"};

	int (*ptr)(char *str);

	ptr = strPrint;

	//calling the function
	if(!(ptr)(str));
	printf("Done\n");

	return (0);
}

int strPrint(char *str)
{
	printf("%s\n", str);
	return (0);
}