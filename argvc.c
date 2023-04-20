#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Number of elements is %d\n", argc);

	for (i = 1; argv[i]; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
}
