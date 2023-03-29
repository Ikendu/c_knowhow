#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
        int A = *((int*) a);
        int B = *((int*) b);
        return A - B;
}

int main()
{
        int i, A[] = {-81, -5, 3, 9, 10, 5, 31, 73};

        qsort(A, 6, sizeof(int), compare);
        for (i = 0; i < 6; i++)
            printf("%d \n", A[i]);
}