#include <stdio.h>

void lineRead(FILE *pf1, FILE *pf2);

int main()
{
        FILE *ftp1, *ftp2;
        end = 0;

        if ((ftp1 = fopen("text1.txt", "w")) == NULL)
        {
                printf("The file write failed \n");
                end = 1;
        }
        else if((ftp2 = fopen("text.txt", "r")) == NULL)
        {
                printf("The file write for II faild");
                end = 1;
        }
        else
        {
                lineRead(ftp1, ftp2);
                fclose(ftp1);
                fclose(ftp2);
        }
}