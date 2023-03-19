#include <stdio.h>

void readWrite(FILE *f1, FILE *f2);
int main()
{
        FILE *fptr1, *fptr2;
        int end = 0;

        char filen2[] = "text2.txt";
        char filen1[] = "text.txt";

        if ((fptr2 = fopen(filen2, "w")) == NULL)
        {
                printf("fopen function failed \n");
                end = 1;
        }
        else if ((fptr1 = fopen(filen1, "r")) == NULL)
        {
                printf("fopen II function failed \n");
                end = 1;
        }
        else
        {
                readWrite(fptr1, fptr2);
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
