#include <stdio.h>

int main(void)
{
        int lastd, num, firstn, ab = 0;

              printf("Enter a number:");
              scanf("%d", &num);

              lastd = num % 10;

              while(num >= 10)
              {
                      num = num /10;
              }

              firstn = num;

              printf("The first digit is: %d\n", firstn);
              printf("The last digit is: %d\n", lastd);

        return (0);
}