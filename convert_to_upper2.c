#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum constant{COUNT = 4, DETA = 'a' - 'A'};
typedef char *STRING[COUNT];
typedef char *PTR_STR;
typedef int INTEGER;

void convert(PTR_STR str2, PTR_STR str1);

int main()
{
        STRING str;
        STRING talk = {"I am coming back",
                       "I will be early",
                       "I will win well",
                       "I am becoming rich"};
        INTEGER end = 0;
        INTEGER i;

        for (i = 0; i < COUNT; i++)
        {

                str[i] = malloc((strlen(talk[i]) + 1) * sizeof(char));
                if(str[i] == NULL)
                        printf("invalid malloc function");
                        end = 1;
                convert(str[i], talk[i]);
                printf("%s\n", talk[i]);
        }
        printf("\n");
        for (i = 0; i < COUNT; i++)
            printf("%s\n", str[i]);
        return (end);
}

void convert(PTR_STR str2, PTR_STR str1)
{
        INTEGER i;

        for (i = 0; str1[i]; i++)
        {
               if ((str1[i] >= 'a') && (str1[i] <= 'z'))
                  str2[i] = str1[i] - DETA;
               else
                   str2[i] = str1[i];
        }
        str2[i] = '\0';
}