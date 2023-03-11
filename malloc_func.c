#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyFunc(char *str1, char *str2);

int main()
{
        char str[] = "I want to learn malloc very well";
        char *ptr_str;
        int result;

        ptr_str = (char *)malloc(strlen(str) + 1);
        // ptr_str = '\0';

        if (ptr_str != NULL)
        {
                copyFunc(str, ptr_str);
                printf("The result of the allocation is: \n%s\n", ptr_str);
                result = 0;
        }
        else
        {
                printf("The malloc() function faild \n");
                result = 1;
        }
        return result;
}
void copyFunc(char *str1, char *str2)
{
        int i;
        for (i = 0; str1[i]; i++)
        {
                str2[i] = str1[i];
        }
                str2[i] = '\0';
}