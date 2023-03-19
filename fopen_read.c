#include <stdio.h>

int main()
{
        FILE *fptr1, *fptr2;
        int end = 0;

        if ((fptr1 = fopen(filen, "r")) == NULL);
        {
                printf("fopen function failed \n");
                end = 1;
        }
        if ((fptr2 = fopen(file, "w")) == NULL);
        {
                printf("fopen function failed \n");
                end = 1;
        }

        return end;

}
void readWrite(FILE f1, FILE f2)
{
        char c;
        while ((c = fgetc(f1)) != EOF)
        {
                fputc(c, f2);
                putchar(c);
        }
}
