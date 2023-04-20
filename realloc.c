#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyThings(char *str2, char *str1);

int main()
{
        char *str[] = {"There is music in the tress",
                       "There is music in the mountians",
                       "There is music in the rivers",
                       "There is music in the air and winds",
                       "The earth is only an echo of the music"
                       };
        char *ptr_str;
        int endhere = 0;
        int i;

        ptr_str = malloc((strlen(str[0]) + 1) * sizeof(char));

        if (ptr_str == NULL)
        {
                printf("The malluc() function failed \n");
                endhere = 1;
        }
        else
        {
                strcpy(ptr_str, str[4]);
                printf("%s \n", ptr_str);

                for (i = 0; i < 5; i++)
                {
                        ptr_str = realloc(ptr_str, (strlen(str[i]) + 1) * sizeof(char));
                        if(ptr_str == NULL)
                        {
                                printf("The realloc function failed \n");
                                endhere = 1;
                        }
                        else
                        {
                                strcpy(ptr_str, str[i]);
                                printf("%s \n", ptr_str);
                                endhere = 0;
                        }
                }
        }
        free(ptr_str);
        return endhere;

}


void copyThings(char *str2, char *str1)
{
        int i;

        for (i = 0; str1[i]; i++)
        {
                str2[i] = str1[i];
        }
        str2[i] = '\0';
}
