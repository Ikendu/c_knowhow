#include <stdio.h>

int main(void)
{
        int c = ' ';

        printf("Enter a character from keys");

        while (c != 'k')
        {
               c = getchar();
               putchar(c);
        }

        return (0);

}
