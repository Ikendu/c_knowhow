#include <stdio.h>
#include <stdlib.h>

/*
Write a program to ask the user to enter the total number of bytes he or she wants
to allocate. Then, initialize the allocated memory with consecutive integers, starting
from 1. Add all the integers contained by the memory block and print out the final
result on the screen.
*/

int main()
{
        int *ptr_num, num = 0, sum = 0, i;
        char chara = 'c';

        int end = 0;

        while (chara != 'x')
        {
                printf("Enter the number to be added \n");
                scanf("%d", &num);

               /* not working yet
               for (i = 'a'; i <= 'z'; i++)
                {
                        if(num == i)
                        printf("Please enter a real number to proceed \n");
                }
                */


                ptr_num = malloc(num * sizeof(int));

                if (ptr_num == NULL)
                {
                        free(ptr_num);
                        end = 1;
                }
                else
                {
                        for (i = 0; i < num; i++)
                                ptr_num[i] = i + 1;
                }
                for (i = 0; i < num; i++)
                sum += ptr_num[i];

                printf("the sum of the memory generated numbers is %d \n", sum);



                printf("Enter x to quit or other key to continue\n");
                scanf("%s", &chara);
        }
        return (end);

}