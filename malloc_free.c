#include <stdio.h>
#include <stdlib.h>

void multiplyFunc(int max, int *ptr);
void printTable(int max, int *ptr);

int main()
{
        int max, *ptr_num;
        int terminator;
        char key = 'c';

        max = 0;
        terminator = 0;

        while(key != 'x')
        {
                printf("Enter a number to get the multiplication table\n");
                scanf("%d", &max);
                ptr_num = malloc(max * max * sizeof(int));
                if (ptr_num != NULL)
                {
                        multiplyFunc(max, ptr_num);
                        printTable(max, ptr_num);
                        free(ptr_num);
                }
                else
                {
                        printf("The malluc() function failed \n");
                        terminator = 1;
                        key = 'x';
                }
                printf("\n Press x to quit or other key to continue: \n");
                scanf("%s", &key);
        }
        printf("\n Goodbye \n");
        return terminator;
}
void multiplyFunc(int max, int *ptr)
{
        int i, j;

        for (i = 0; i < max; i++)
            for (j = 0; j < max; j++)
                  *(ptr + i * max + j) = (i + 1) * (j + 1);
}
void printTable(int max, int *ptr)
{
        int i, j;

        printf("The multiplication table of %d is:\n", max);
        printf(" ");

        for (i = 0; i < max; i++)
              printf("%4d ", i + 1);
        printf("\n");

        for (i = 0; i < max; i++)
              printf("-----", i + 1);
        for (i = 0; i < max; i++)
        {
                printf("\n%d|", i + 1);
                for (j = 0; j < max; j++)
                printf("%3d  ", *(ptr + i * max + j));
        }

}
