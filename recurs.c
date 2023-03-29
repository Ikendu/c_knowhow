#include <stdio.h>

int factos(int n)
{
        if (n == 0 || n == 1)
        return 1;
        return (n * factos(n - 1));
}

int sumdigit(int n)
{
        if (n == 0)
        return (0);
        return (n % 10 + sumdigit(n / 10));
}
int main()
{
        printf("%d\n", factos(4));
        printf("%d\n", sumdigit(4000));
}