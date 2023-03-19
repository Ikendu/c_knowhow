#include <stdio.h>

void writeBlock(FILE *fin, FILE *fout);

int err(int err);

int main()
{
        FILE *ptrf1, *ptrf2;
        int end = 0;

        if ((ptrf1 = (fopen("text.txt", "w")) == NULL)
        {
                printf("The fopen did not succeed \n");
                end = 1
        }
}