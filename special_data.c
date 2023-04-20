#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
        enum cars {toyota = 50, ben = 20, jagua, life = 25};

        enum week[] { mon, tue, wed, thur, fri, sat, sun };

        // printf("%s \n", week);
        printf("Mon: %d \n Tue: %d \n Wen: %d \n Thur: %d \n Fri: %d \n Sat: %d \n Sun: %d \n ",
         mon, tue, wed, thur, fri, sat, sun);

        // for (i = 0; i < 4; i++)
        printf("Toyota: %d Ben: %d Jagua: %d Life: %d\n ", toyota, ben, jagua, life);

        return (0);
}