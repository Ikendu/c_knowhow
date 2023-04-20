#include <stdio.h>

void insert_data(int arr[], int arr2[], int n, int data, int pos)
{
        int i, j, index;
        if (pos == 0)
        printf("there is no 0 position");
        index = pos-1;
        for (i = 0; i <= index-1; i++ )
        {
                arr2[i] = arr[i];
        }
        arr2[index] = data;

        for (i = index, j = index+1; i < n, j < n+1; i++, j++)
        {
                arr2[j] = arr[i];
        }
}
int main()
{
        int arr[] = {1, 10, 11, 12, 22, 33, 50, 60, 70, 71};
        int size = sizeof(arr)/sizeof(arr[0]);
        int i;
        int arr2[size+1];

        insert_data(arr, arr2, size, 100, 8);

        for (i = 0; i < size+1; i++)
        printf("%d \n", arr2[i]);

        return (0);


}