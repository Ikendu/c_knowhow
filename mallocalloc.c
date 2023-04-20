#include <stdio.h>
#include <stdlib.h>

/*
Write a program to ask the user to enter the total number of float data. Then use
the calloc() and malloc() functions to allocate two memory blocks with the
same size specified by the number, and print out the initial values of the two memory
blocks.
*/

int main()
{
        float *ptr, *ptr2, num = 0;
        int i, end = 0;

        printf("Enter a number to validate \n");
        scanf("%f", &num);

        ptr = calloc(num, sizeof(float));
        if (ptr == NULL)
        {
                printf("memory not validate");
                end = 1;
        }
        else
        {
                ptr2 = malloc(num * num * sizeof(float));
                if (ptr2 == NULL)
                {
                        printf("malloc failed");
                        end = 1;
                }
        }
        for(i = 0; i < num; i++)
        {
                printf("The initial values of calloc and malloc is %f and %f \n", *(ptr + i), *(ptr2 + i));
        }
        free(ptr);
        free(ptr2);
        printf("Goodbye \n");

        return (end);
}