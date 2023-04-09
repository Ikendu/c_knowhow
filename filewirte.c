#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *fp;
        char str[] = "How are you doing";
        int i;

        fp = fopen("myfilez.txt", "w");

        fprintf(fp, "%s\n%s\n%s\n%s\n", "I love my wife and my Gift.", "She get plenty sense and she is beautiful.",
         "I love her so much.", "God has blessed us as we makes our way to the top.");
         if (fp != " ")
         {
                 printf("the file system worked well");
         }
         else
         {
                 printf("The file system failed");
         }

         for (i = 0; i != str[i]; i++)
         {
                 fputc(str[i], fp);
         }



        fclose(fp);
}