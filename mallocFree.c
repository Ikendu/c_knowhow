#include <stdio.h>
#include <stdlib.h>

int multiplyFunc(int num, int *ptr);
int showTable(int num, int *ptr);

int main()
{
        int num, *ptr_num;
        int endit = 0;
        char key = 'c';

        while (key != 'x')
        {
                printf("Enter a number to get the multiplication Table \n");
                scanf("%d", &num);
                ptr_num = malloc(num * num * sizeof(int));
                //ptr_num = calloc(num, num * sizeof(int));

                if (ptr_num != NULL)
                {
                        multiplyFunc(num, ptr_num);
                        showTable(num, ptr_num);
                        free(ptr_num);
                }
                else
                {
                        printf("The malloc function failed \n");
                        key = 'x';
                        endit = 1;
                }
                printf("\n Press x to exit or another number to check \n");
                scanf("%s", &key);
        }
        printf("\n Exiting System...Goodbye...\n");
        return endit;
}

int multiplyFunc(int num, int *ptr)
{
        int i, j, result;

        for (i = 0; i < num; i++)
        {
                for (j = 0; j < num; j++)
                {
                        *(ptr + i * num + j) = (i + 1) * (j + 1);
                }
        }
}
int showTable(int num, int *ptr)
{
        int i, j, result;

        for (i = 0; i < num; i++)
        {
                printf("%4d", i + 1);
        }
        printf("\n");
        for (i = 0; i < num; i++)
        {
                printf("----");
        }
        for (i = 0; i < num; i++)
        {
                printf("\n%d", i + 1);
                for (j = 0; j < num; j++)
                {
                        printf("%3d ", *(ptr + i * num + j));
                }
        }
}
