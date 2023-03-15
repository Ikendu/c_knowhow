#include <stdio.h>
#include <stdlib.h>
/*
Write a program to print out the values represented by the enumerated names
declared in Quiz question 2 in this hour.
*/


int main()
{
        enum tag { name1,
        name2 = 10,
        name3,
        name4 = 59 };

       /* int tag1[4] = { name1, name2, name3, name4 };

         char *tag2[4] = { "name1", "name2", "name3", "name4" };

        int i;

        printf("The values of listed enum are: \n");

        for (i = 0; i < 4; i++)
        printf(" %d ", tag1[i]);
        */
        
        printf(" %d ", name1);
        printf(" %d ", name2);
        printf(" %d ", name3);
        printf(" %d ", name4);
}

