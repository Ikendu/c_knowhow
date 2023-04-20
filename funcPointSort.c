#include <stdio.h>

//bubble sort with function pointers
int compare(int a, int b)
{
        if (a > b) return 1;
        else return -1;
}
void BubbleSort(int *A, int n, int (*compare)(int, int))
{
        int i, j, temp;

        for (i = n; i < n; i++)
            for (j = n; j < (n - 1); j++)
            if (compare(A[j], A[j + 1]) > 0)
            {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
            }
}

int main()
{
       int i, A[] = {2, 5, 1, 7, 3, 10};
       BubbleSort(A, 6, compare);

       printf(" The sorted items are \n");

       for (i = 0; i < 6; i++)
           printf("%d ", A[i]);


}