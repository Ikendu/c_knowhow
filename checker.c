#include <stdio.h>

int main()
{
        double num1, num2, sum;
        char name1[20], name2[20];

        printf("Enter 1st num: \n");
        scanf("%lf", &num1);

        printf("Enter 2nd num: ");
        scanf("%lf", &num2);
        sum = num1 + num2;
        printf("The sum of both is: %f\n", sum);

        printf("Now enter your first and last name: \n");
        scanf("%s%s", name1, name2);
        printf("Your name is %s %s. \n", name1, name2);

}
