#include <stdio.h>
#include <stdarg.h>

double addDouble(int x,...);

main()
{
	double a = 1.9;
	double b = 3.9;
	double c = 4.9;
	double d = 5.9;
	double e = 7.9;

	printf("using a function with unspecified number of arguments \n");
	printf("addition of %.2f, %.2f and %.2f is %.2f \n", a, b, c, addDouble(3, a, b, c));
	printf("addition of %.2f, %.2f, %.2f and %.2f is %.2f\n", a, b, c, d, addDouble(4, a, b, c, d));

	return (0);
}

double addDouble(int x, ...)
{
	va_list arglist;
	int i;
	double result = 0.0;

	va_start(arglist, x);
	for (i = 0; i < x; i++)
	 	   result += va_arg(arglist, double);

			va_end(arglist);
	  		return (result);


}
