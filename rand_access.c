#include <stdio.h>

enum {SUCCESS, FAIL, MAX = 81};

void ptrSeek(FILE *fptr);
long ptrTell(FILE *fprt);
void readData(FILE *fptr);
int errMsg(char str);

int main()
{
        FILE *fptr;
        char filename[] = "text.txt";
        int end = SUCCESS;

        if ((fptr = fopen(filename, "r")) == NULL)
        {
                end = errMsg(filename);
        }
        else{
                ptrSeek(fptr);
                fclose(fptr);
        }
        return end;
}
void ptrSeek(FILE *fptr)
{
        long offset1, offset2, offset3;

        offset1 = ptrTell(fptr);
        readData(fptr);
        offset2 = ptrTell(fptr);
        readData(fptr);
        offset3 = ptrTell(fptr);
        readData(fptr);

        printf("\n Points to consider \n");

        fseek(fptr, offset1, SEEK_SET);
        readData(fptr);

        fseek(fptr, offset2, SEEK_SET);
        readData(fptr);

        fseek(fptr, offset3, SEEK_SET);
        readData(fptr);
}
long ptrTell(FILE *fptr)
{
        long end;

        end = ftell(Fptr);
        printf("")
}