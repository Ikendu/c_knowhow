#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum constants{COUNT = 4, DELT = 'a' - 'A'};
typedef char *STRING[COUNT];
typedef char *PTR_STR;
typedef int INTEGER;

void convert(PTR_STR str1, PTR_STR str2);

int main()
{
        STRING str;
        STRING song = { "who is on the lords side",
                   "how long more can u stay",
                   "why do you want to stay that long",
                   "how many can you sustain with u"};
        INTEGER i;
        INTEGER end = 0;

        for (i = 0; i < COUNT; i++)
        {
                str[i] = malloc((strlen(song[i]) + 1) * sizeof(char));
                if (str[i] == NULL)
                        printf("error malloc function \n");
                        end = 1;
        convert(song[i], str[i]);
        printf("%s \n", song[i]);
        }
        printf("\n");

        for (i = 0; i < COUNT; i++)
            printf("%s \n", str[i]);
        return (end);

}
void convert(PTR_STR str1, PTR_STR str2)
{
        INTEGER i;

        for (i = 0; str1[i]; i++)
        {
                if ((str1[i] >= 'a') && (str1[i] <= 'z'))
                   str2[i] = str1[i] - DELT;
                else
                    str2[i] = str1[i];
        }
        str2[i] = '\0';
}