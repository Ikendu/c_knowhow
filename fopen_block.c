#include <stdio.h>

void writeBlock(FILE *fin, FILE *fout);

int err(int err);

int main()
{
        FILE *ptrf1, *ptrf2;
        int end = 0;

        if ((ptrf1 = fopen("text.txt", "w")) == NULL)
        {
                printf("The fopen did not succeed \n");
                end = 1
        }
        else if ((ptf2 = fopen("text1.txt", "r")) == NULL)
        {
                printf("The 2nd fopen function failed \n");
                end = 1;
        }
        writeBlock( ptrf1, ptrf2);

        fclose(ptrf1);
        fclose(ptrf2);
        return (end);
}
void writeBlock(FILE *fin, FILE *fout)
{
        int num;
        max = 100;
}