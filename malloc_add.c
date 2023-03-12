#include <stdio.h>
#include <stdlib.h>

int main()
{
        int *ptr_num, end = 0, sum = 0, num = 0, i;

        printf("Enter the size of memory needed \n");
        scanf("%d", &num);
        ptr_num = malloc(num * sizeof(int));

        if (ptr_num == NULL)
        {
                printf("The malloc function failed /n");
                end = 1;
        }
        else
        {
                for (i = 0; i < num; i++)
                {
                        ptr_num[i] = i + 1;
                        printf("%d \n", ptr_num[i]);
                }
        }
        for (i = 0; i < num; i++)
        {
                sum += ptr_num[i];
        }
        printf("The sum is: %d \n", sum);
        free(ptr_num);
        return end;

}