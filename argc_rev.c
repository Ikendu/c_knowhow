#include <stdio.h>

int main(int argc, char* argv[])
{
        int i = 0, sum = 0;
        printf("The number of things entered are %d \n", argc);

        printf("the items inside argv[] are:\n");
        for (i = 1; i < argc; i++)
        {
                if (i >= 1)
                {
                        printf("%d. %s \n", i,  argv[i]);
                        sum += atoi(argv[i]);
                }
        }
        printf("The total sum is %d \n", sum);


        return (0);
}