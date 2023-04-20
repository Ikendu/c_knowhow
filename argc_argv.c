#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int count;
        printf("This program was called with %s", argv[0]);

                if(argc > 1)
                {
                        printf("The arguments are: \n");
                        for(count = 1; count < argc; count++)
                        {
                                  printf("\"%s\"\n" , argv[count]);
                        }

                }
                else
                {
                    printf("The command had no other argument");
                }

        return (0);
}