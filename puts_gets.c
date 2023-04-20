#include <stdio.h>

main()
{
       char str[30];
       int i; // delt = 'a' - 'A';

       i = 0;

       printf("Enter a line of alphabets lass that 30 \n");
       //gets(str);
       scanf("%s", str);

       for (i < 0; str[i]; i++)
           if((str[i] >= 'a') && (str[i] <= 'z'))
           str[i] -= 'a' -'A';

      /*
      while(str[i])
       {
               if((str[i] >= 'a') && (str[i] <= 'z'))
               str[i] -= delt;
               ++i;
       }
       */
       printf("The uppercase of the entered chars are \n");
       puts(str);
        return 0;
}