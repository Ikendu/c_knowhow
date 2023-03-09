#include <stdio.h>

int MultiTwo(int a, int b);

int MultiTwo(int a, int b)
{
	int ab;

	ab = a * b;
	return (ab);
}

main()
{
	printf("The multiplication of %d and %d is: %d", 5, 10, MultiTwo(5, 10));
}