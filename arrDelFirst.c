#include <stdio.h>
int del_first(int arr[], int n)
{
        int i;

        if (n == 0)
        {
                printf("the array is empty \n");
                return (0);
        }
        for (i = 0; i < n-1; i++)
        {
                a[i] = a[i + 1];
        }
        return (n - 1);
}