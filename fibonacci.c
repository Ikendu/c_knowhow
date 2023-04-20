#include <stdio.h>

 int fibonacci(int x)
{
        if (x == 0)
           return (0);

        if (x == 1)
           return (1);

           return (fibonacci(x - 1) + fibonacci(x - 2));
}
int main()
{
        int x, num;

        printf("Enter a number to evaluate Fibonacci \n");
        scanf("%d", &num);

        printf("The Fibonacci sequence are:\n");
        for (x = 0; x < num; x++)
            printf("%d\n", fibonacci(x));

            return (0);

}