#include <stdio.h>
#include <stdlib.h>

/*
Write a program that allocates a block of memory space to hold 100 items of the
float data type by calling the calloc() function. Then, reallocate the block of
memory in order to hold 50 more items of the float data type.
*/
int main()
{
        float *ptr_mem;
        int end = 0;

        ptr_mem = calloc(100, sizeof(float));
        if (ptr_mem == NULL)
        {
                printf("Calloc function failed \n");
                end = 1;
        }
        else
        {
                ptr_mem = realloc(ptr_mem, 150 * sizeof(float));
                if(ptr_mem == 0)
                {
                        printf("Realloc function failed \n");
                }
                printf("Realloc function validated \n");
        }
        free(ptr_mem);
        return (end);
}