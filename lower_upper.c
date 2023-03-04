#include <stdio.h>

main()
{
       char str[30];
       int i, delt = 97 - 65;

       printf("Enter a line of alphabets lass that 30 \n");
       gets(str);

       for (i = 0; str[i]; ++i)
       {
               if((str[i] >= 97) && (str[i] <= 122))
               str[i] -= delt;
       }
       printf("The uppercase of the entered chars are \n");
       puts(str);
        return 0;
}