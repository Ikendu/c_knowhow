#include <stdio.h>

unsigned long int factos( int x)
{
      /*
      //using recursion
       long long int result;
        if (x <= 1)
        {
                return (1);
        }
        result = x * factos(x - 1);
        return (result);
*/
        int i, result = 1;

        if (x <= 1)
               return (1);
        for (i = 1; i <= x; i++)
            result = result * i;
            return (result);

}

int main()
{
        unsigned int x;

        printf("Enter a number to get the Factorial\n");
        scanf("%d", &x);
        printf("The factorial of the input is: %d", factos(x));

        return (0);
}