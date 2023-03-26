#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);
int main()
{
        int n1, n2;

        //n1 = sum(3, 50, 10, 10);
        //n2 = sum(4, 80, 100, 50, 100);
        sum(n1++);

        printf("\n the sum is %d and %d \n", n1);

        return (0);
}

int sum(int count, ...)
{
        int i, addup = 0, numbers = 0;
        va_list nums;

        va_start(nums, count);
        //n = (x + y + va_arg(nums, int) + va_arg(nums, int) + va_arg(nums, int));

        printf("How many number do you want to add? \n");
        scanf("%d", &count);
        printf("Now enter the %d numbers \n", count);

        for (i = 1; i <= count; i++)
        {
                scanf("%d", &numbers);
                nums += numbers;
                addup += va_arg(nums, int);
        }
        va_end(nums);

        return (addup);
}