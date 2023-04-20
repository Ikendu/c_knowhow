#include <stdio.h>
#include <stdarg.h>

int multiarg(int x, ...);

main()
{
	int a;
	int b;
	int c;
	int d;


        printf("Enter sum 4 digits to multiply\n");
        scanf("%d%d%d%d\n", &a, &b, &c, &d);
        printf("The result of multiplying the digits is %d\n", multiarg(4, a, b, c, d));

        return (0);
}

int multiarg(int x, ...)
{
	va_list arglist;
	int i;
	int result = 1;

	printf("Now inside the function\n");

	va_start(arglist, x);

	for (i = 0; i < x; ++i)
	    result *= va_arg(arglist, int);

	va_end(arglist);

	return (result);
}