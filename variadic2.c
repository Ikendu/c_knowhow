#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);
int main()
{
        int n1, n2, numbs;
        //n1 = sum(3, 50, 10, 10);
        //n2 = sum(4, 80, 100, 50, 100);
        printf("How many numbers do u want to add? \n");
        scanf("%d", &numbs);

        n1 = sum(numbs, 20, 10, 50, 30);

        printf("\n the sum is %d", n1);

        return (0);
}

int sum(int count, ...)
{
        int i, addup = 0;
        va_list nums;

        va_start(nums, count);
        //n = (x + y + va_arg(nums, int) + va_arg(nums, int) + va_arg(nums, int));
        for (i = 1; i <= count; i++)
        {
                addup += va_arg(nums, int);
        }
        va_end(nums);

        return (addup);
}