#include <stdio.h>

void add(int a, int b)
{
        printf("The sum is %d", a+b);
}
void sub(int a, int b)
{
        printf("The sub is %d", a - b);
}
void mult(int a, int b)
{
        printf("The multiplication is %d", a * b);
}

int main()
{
        int op, a = 10, b = 5;
        void(*ptr_calc[])(int, int) = {add, sub, mult};

        printf("\nEnter operator, 0 for add, 1 for sub, 2 for mult\n");
        scanf("%d", &op);

        if (op > 2)
        {
                printf("\nWrong input\n");
                return 0;
        }
        ptr_calc[op](a, b);

}