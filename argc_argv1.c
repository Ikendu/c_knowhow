#include <stdio.h>

int main(int argc, char *argv[])
{
        int i;

        printf("The number of arguments passed is %d \n", argc);
        printf("the name of the file is: %s \n", argv[0]);
        printf("The least of the arguments are: \n");

        for(i = 0; i < argc; i++)
        printf("%s \n", argv[i]);

        return (0);
}