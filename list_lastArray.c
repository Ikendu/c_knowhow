#include <stdio.h>

//deleting the last element of an array

int main()
{
        int arry[] = {60, 50, 10, 3, 60, 73};
        int i;
        int size = sizeof(arry)/sizeof(arry[0]);
        size = size-1;

        for (i = 0; i < size; i++)
        printf("%d \n", arry[i]);
        return (0);
}