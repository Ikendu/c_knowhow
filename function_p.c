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
        void(*ptr_calc[])(int, int) = {add, sub, mult};

        Printf("Enter operator, 0 for add, 1 for sub, 2 for mult");
        scanf("%d", &op);
        
}