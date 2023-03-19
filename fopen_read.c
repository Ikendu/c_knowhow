#include <stdio.h>

int main()
{
        FILE *fptr1, *fptr2;
        int end = 0;

        char filen[] = "text.txt";
        char filen1[] = "text2.txt";

        if ((fptr1 = fopen(filen, "r")) == NULL);
        {
                printf("fopen function failed \n");
                end = 1;
        }
        if ((fptr2 = fopen(filen1, "w")) == NULL);
        {
                printf("fopen function failed \n");
                end = 1;
        }
        readWrite(fptr1, fptr2);
        fclose(fptr1);
        fclose(fptr2);

        return end;

}
void readWrite(FILE *f1, FILE *f2)
{
        char c;
        while ((c = fgetc(f1)) != EOF)
        {
                fputc(c, f2);
                putchar(c);
        }
}
