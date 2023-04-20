#include <stdio.h>

int addup(int x[]);

main()
{
	int  x[3];
	printf("Enter three number to add \n");
	scanf("%d%d%d", &x[0], &x[1], &x[2]);

	printf("The result of the nums is %d\n", addup(x));
	return 0;
}
int addup(int list[])
{
	int i, result = 0;

	for (i = 0; i < 3; i++)
	result += list[i];
	return (result);
}