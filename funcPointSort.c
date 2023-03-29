#include <stdio.h>

int BubbleSort(int A[], int n)
{
        int i, j, temp;

        for (i = 0; i < n; i++)
            for (j = 0; j < (n-1); j++)
            {
                    if (A[j] > A[j+1])
                    {
                            temp = A[j];
                            A[j] = A[j + 1];
                            A[j + 1] = temp;
                    }
            }

}
int main()
{
        int i, A[] = {2, 9, 10, 44, 20, 7};
        BubbleSort(A, 6);

        for (i = 0; i < 6; i++)
        printf("%d ", A[i]);
}
/* int compare(int a, int b)
{
        if (a > b) return 1;
        else return -1;
}

int BubbleSort(int *A, int n, int (*compare)(int, int))
{
        int i, j, temp;

        for (i = 0; i < n; i++)
            for (j = 0; j < (n - 1); j++)
            {
                    if (compare(A[j], A[j+1]) > 0)
                    {
                            temp = A[j];
                            A[j] = A[j+1];
                            A[j+1] = temp;
                    }
            }
}

int main()
{
        int i, A[] = {2, 5, 9, 10, 8, 1};

        BubbleSort(A, 6, compare);

        for(i > 0; i < 6; i++)
        printf("%d ", A[i]);
}
*/