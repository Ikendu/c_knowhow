#include <stdio.h>

void readWrite(FILE *f1, FILE *f2);
int main()
{
        FILE *fptr1, *fptr2;
        int end = 0;

        char filen[] = "text2.txt";
        char filen1[] = "text.txt";

        if ((fptr1 = fopen(filen, "w")) == NULL)
        {
                printf("fopen function failed \n");
                end = 1;
        }
        else if ((fptr2 = fopen(filen1, "r")) == NULL)
        {
                printf("fopen II function failed \n");
                end = 1;
        }
        else
        {
                readWrite(fptr2, fptr1);
                fclose(fptr1);
                fclose(fptr2);
        }


        return end;

}
void readWrite(FILE *f1, FILE *f2)
{
        int c;

        while ((c = fgetc(f1)) != EOF)
        {
                fputc(c, f2);
                putchar(c);
        }
}
