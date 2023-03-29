#include <stdio.h>

int recurs(int n)
{
        if (n == 0 || n == 1)
        return 1;
        return (n * recurs(n - 1));
}int main()
{
        printf("%d", recurs(4));
}