#include <stdio.h>

int main(int argc, char *argv[])
{
        int i, deta = 'a' - 'A';


        if (argc <= 3)
        {
                printf("The items entered are only: %s and %s \n", argv[1], argv[2]);
                printf("with %s as heading \n", argv[0]);
                printf ("Try again with more entries\n");

        }
        else
        {
                printf("The items entered are listed below \n");
                for (i = 0; argv[i]; i++)
                /*{
                        if ((argv[i] >= 'a') && (argv[i] <= 'z' ))
                        argv[i] -= deta;
                }
                */

               // printf("%s \n", argv[i]);
                puts(argv[i]);
        }
        return (0);
}
