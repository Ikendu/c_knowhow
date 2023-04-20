#include <stdio.h>
int del_first(int arr[], int n)
{
        int i;

        if (n == 0)
        {
                printf("the array is empty \n");
                return (n);
        }
        for (i = 0; i < n-1; i++)
        {
                arr[i] = arr[i + 1];
        }
        return (n-1);
}
int main()
{
        int i, n, arr[6];

        printf("Enter the number of elements < 6\n");
        scanf("%d", &n);

        printf("Enter the element one after the other\n");
        for (i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }

        n = del_first(arr, 5);
        printf("The number entered in array minus the last are\n");
        for(i = 0; i < n; i++)
        {
                printf("%d\n", arr[i]);
        }
        return (0);
}
