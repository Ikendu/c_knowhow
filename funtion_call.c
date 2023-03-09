#include <stdio.h>

int add_two(int i, int j);
double sub_from(double a, double b);


main()
{
        int m = 90;
        int n = 10;
        
        double x = 50.60;
        double y =  40.40;

        printf("add_two function returns: %d \n", add_two(m, n));
        printf("sub_from function returns: %f \n", sub_from(x, y));

        return (0);
}

int add_two(int i, int j)
{
        printf("The first function \n");
        return (i + j);
}

double sub_from(double a, double b)
{
        printf("The second function \n");
        return (a - b);
}