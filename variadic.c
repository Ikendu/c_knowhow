#include <stdio.h>
#include <stdarg.h>

int sum(int x, int y, ...);
int main()
{
        int n1, n2;
        n1 = sum(30, 50, 0, 0);

        n2 = sum(50, 80, 100, 50, 100);
        printf("\n the sum is %d and %d \n", n1, n2);

        return (0);
}

int sum(int x, int y, ...)
{
        int n;
        va_list nums;

        va_start(nums, y);
        n = (x + y + va_arg(nums, int) + va_arg(nums, int) + va_arg(nums, int));
        va_end(nums);

        return (n);
}