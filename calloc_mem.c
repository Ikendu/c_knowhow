#include <stdio.h>
#include <stdlib.h>

int main()
{
        int *ptr1, *ptr2;
        int n = 10, y, endpro = 1;

        ptr1 = malloc(n * sizeof(int));
        // ptr1 = 0;
        ptr2 = calloc(n, sizeof(int));

        if (ptr1 == NULL)
        {
                printf("malloc function failed \n");
        }
        else if (ptr2 == NULL)
        {
                printf("calloc Function failed \n");
        }
        else
        {
                printf("\nThe initial value of the pointed memory are as follow: \n\n");
                for (y = 0; y < n; y++)
                {
                        printf("  ptr1[%d] = %-20d  ptr2[%d] = %5d \n", y, *(ptr1 + y), y, *(ptr2 + y));
                }
                free(ptr1);
                realloc(ptr2, 0);
                endpro = 0;
        }

        return endpro;

}