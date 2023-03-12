#include <stdio.h>
#include <stdlib.h>

int main()
{
        float *ptr1, *ptr2;
        int n = 10, y, endpro = 1;

        ptr1 = malloc(n * sizeof(float));
        ptr2 = calloc(n, sizeof(float));

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
                for (y = 0; y < n; y++)
                {
                        printf("ptr1[%d] = %-40.2f  ptr2[%d] = %5.2f \n", y, *(ptr1 + y), y, *(ptr2 + y));
                        endpro = 0;
                }
                free(ptr1);
                free(ptr2);
        }

        return endpro;

}