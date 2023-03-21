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
        
}