#include <stdio.h>

enum {success, fail};

int main()
{
        FILE *fptr;

        char filen[] = "text.txt";
        int reval = success;

        if((fptr = fopen(filen, "r")) == NULL)
        {
                printf("The file open function faile");
                reval = fail;
        }
        else
        {
                printf("The content of the file is 0x%p \n", fptr);
                printf("About to close the file");
                fclose(fptr);
        }

        return reval;
}