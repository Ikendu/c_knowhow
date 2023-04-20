#include <stdio.h>

int main(void)
{
        char str1[] = "This is Exercise 1.";
        char str2[] = {};
        int i;

     /*for (i = 0; str1[i]; i++)
        {
                str2[i] = str1[i];
        }

     */

     strcpy(str2, str1);
      printf("%s \n %d", str2, strlen(str1));


}