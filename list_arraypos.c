#include <stdio.h>

//insert at any position of an array

int insert_pos(int arr[], int arr2[], int n, int data, int pos)
{
        int i, j, index = pos-1;

        for (i = 0; i <= index-1; i++)
        {
                arr2[i] = arr[i];
        }
        arr2[index] = data;

        for (i = index+1, j = index; i < n+1, j < n; i++, j++)
        {
                arr2[i] = arr[j];
        }
}

int main()
{
        int arr[] = {2, 4, 19, 30, 6, 20, 14, 8, 9, 10};
        int i;
        int size = sizeof(arr)/sizeof(arr[0]);
        int arr2[size+1];
        
        insert_pos(arr, arr2, size, 100, 9);

        for (i = 0; i < size+1; i++)
        {
                printf("%d \n", arr2[i]);
        }
}