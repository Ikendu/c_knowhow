/*
Dynamic Memory Allocation and Static Memory Allocation
In static memory allocation:
1. memory is allocated from stack
2. memory is allocated at compile time
3. memory cannot be increased or decreased (fixed)
4. memory cannot be freed.
5. normal or pointers can be used

In dynanmic memeory alloction
1. memory s allocated from heap
2. memory is allocated at runtime
3. memory can be increased or decreased
4. memory can be freed and reused at any point of the program
5. There is no wastage of memory
6. pointer only variables are used
7. malloc, calloc, realloc allocates memory while free deallocate memory


malloc returns a void pointer that gives us the address of the first byte in block
of memory tat it allocate.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n, i;

        printf("Enter the size of the array \n");
        scanf("%d", &n);

        printf("The size u enter is %d and the array contains \n", n);

        int *arr = calloc(n, sizeof(int));
        for ( i = 0; i < n; i++)
        {
                arr[i] = i + 1;
        }
        free(arr);
        arr[4] = 100;
        arr[0] = 10;
        arr[1] = 20;

        for (i = 0; i < n; i++)
        {
                printf(" %d ", arr[i]);
        }

}