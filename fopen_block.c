#include <stdio.h>

void writeBlock(FILE *fin, FILE *fout);

int err(char *str);

int main()
{
        FILE *ptrf1, *ptrf2;
        int end = 0;

        char filename1[] = "text.txt";
        char filename2[] = "text2.txt";


        if ((ptrf1 = fopen(filename1, "r")) == NULL)
        {
                end = err(filename1);
        }
        else if ((ptrf2 = fopen(filename2, "w")) == NULL)
        {
                end = err(filename2);
        }
        writeBlock( ptrf1, ptrf2);

        fclose(ptrf1);
        fclose(ptrf2);
        return (end);
}
void writeBlock(FILE *fin, FILE *fout)
{
        int num;
        int max = 100;
        char buff[max + 1];

        while (!feof(fin))
        {
                num = fread(buff, sizeof(char), max, fin);
                buff[num * sizeof(char)] = '\0';
                printf("%s", buff);
                fwrite(buff, sizeof(char), num, fout);
        }

}
int err(char *str)
{
        printf("The 2nd fopen function failed \n");
        int end = 1;
}