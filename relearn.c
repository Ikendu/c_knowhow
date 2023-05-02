#include <stdio.h>
#include <stdlib.h>

/**
** Relearning C basic
** Not a waste of time
*/
int sayHi();

int main(void)
{
        sayHi();
        return (0);
}
int sayHi()
{
        char op;
        int num1, num2;
        printf("Enter a number: ");
        scanf(" %d", &num1);
        printf("Enter another: ");
        scanf(" %d", &num2);
        printf("Enter operator: ");
        scanf("  %c", &op);



        if (op == '+')
           printf("sum is %d", num1 + num2);
        else if (op == '-')
           printf("sum is %d", num1 - num2);
        else if (op == '*')
           printf("sum is %d", num1 * num2);
        else
           printf("invalid ops");

}