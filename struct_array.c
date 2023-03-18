#include <stdio.h>

struct hiuku {
        char name[10];
        int b_date;
        int d_date;
        char ch1[40];
        char ch2[40];
        char ch3[40];
};

typedef struct hiuku SHK;

SHK poem[2] = {
        {
                "Sodo",
                1690,
                1870,
                "Leading me along",
                "my shadow goes back home",
                "from looking at the moon"
        },
        {
                "Chola",
                1740,
                1845,
                "A storm wind blows",
                "out from among the grasses",
                "the full moon grows"
        }
};

void hkfunct(SHK *ptr);

int main()
{
        int i;

        for (i = 0; i < 2; i++)
        hkfunct(&poem[i]);
}

void hkfunct(SHK *ptr)
{
        printf("%s\n", ptr->name);
        printf("%d - %d \n", ptr -> b_date, ptr -> d_date);
        printf("%s \n", ptr -> ch1);
        printf("%s \n", ptr -> ch2);
        printf("%s \n\n", ptr -> ch3);
}