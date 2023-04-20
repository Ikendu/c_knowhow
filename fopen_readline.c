#include <stdio.h>

void lineRead(FILE *pf1, FILE *pf2);

int main()
{
        FILE *ftp1, *ftp2;
        int end = 0;

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
                lineRead(ftp2, ftp1);
                fclose(ftp1);
                fclose(ftp2);
        }

        return end;
}

void lineRead(FILE *pf1, FILE *pf2)
{
        int max = 81;
        int buff[max];

        while (fgets(buff, max, pf1) != NULL)
        {
                fputs(buff, pf2);
                printf("%s ", buff);
        }
}