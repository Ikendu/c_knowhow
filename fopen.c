#include <stdio.h>
int main()
{
        FILE *fptr;

        if ((fptr = fopen("text.txt", "r")) == NULL)
        {
                  printf("The fopen() failed /n");
                  exit(1);
        }
        printf("The fopen() function worked well");
}
