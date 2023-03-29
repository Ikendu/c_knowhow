#include <stdio.h>

//bubble sort with function pointers
int compare(int a, int b)
{
        if (a > b) return 1;
        else return -1;
}
int BubbleSort(*A, int n, (*compare)(int, int))
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
        
}