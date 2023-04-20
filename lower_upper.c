#include <stdio.h>

main()
{
       char str[100];
       int i, delt = 'a' - 'A';

       printf("Enter a line of alphabets lass that 30 \n");
       gets(str);

       for (i = 0; str[i]; ++i)
       {
               if((str[i] >= 'a') && (str[i] <= 'z'))
               {
                          str[i] -= delt;
               }
               else{
                          str[i] += delt;
               }
       }
       if (str[i] <= 96)
       {
               printf("The uppercase of the entered chars are \n");
       }
       else
       {
               printf("The lowercase of the entered chars are \n");
       }


       puts(str);
        return 0;
}