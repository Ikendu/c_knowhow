#include <stdio.h>

int add_begin(int arr[], int n, int data)
{
        int i;

        for (i = n-1; i >= 0; i--)
        arr[i+1] = arr[i];

        arr[0] = data;

        return (n+1);
}
int main()
{
        int i, n = 6, data = 11, arr[8] = {78, 32, 10, 2};

        n = add_begin(arr, n, data);

        for (i = 0; i <= n; i++)
        printf("%d \n", arr[i]);

        return (0);
}