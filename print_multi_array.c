#include <stdio.h>

void printchar(char str[][15], int max);

int main(void)
{
	char str[2][15] = { "You know what,", "C is powerful." };

	printchar(str, 2);

	return (0);
}

void printchar(char str[][15], int max)
{
	int i;

	for (i = 0; i < max; i++)
	    printf("%s\n", str[i]);
}

/*void printchar(char str[][15], int a);

int main(void)
{
	char str[3][15] = { "You know what,", "C is powerful."};

	printchar(str, 2);

	return (0);
}

void printchar(char str[][15], int a)
{
	int i;

	for (i = 0; i < a; i++)
	        printf("%s\n", str[i]);
}
*/