#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int count;
        printf("This program was called with %s\n", argv[0]);

                if(argc > 1)
                {
                        printf("The arguments are: \n");
                        for(count = 1; count < argc; count++)
                        {
                                  printf("%s\n" , argv[count]);
                        }

                }
                else
                {
                    printf("The command had no other argument\n");
                }
        int i, sum = 0;

        for (i = 1; i < argc; i++)
         {
                 sum += atoi(argv[i]);
         }
         printf("The sum is %d\n", sum);

        return (0);
}