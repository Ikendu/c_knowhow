#include <stdio.h>

/* int main(void)
{
        int i = 20;
        printf("can u see the scope here i is running with %d\n", i);
        {
                int i = 10, j = 15;
                for (i = 5; i <= 10; i++)
                printf("Another scope of i is here %d with %d \n", i, j);

        }
        printf("can u see the scope here again, i is: %d\n", i);
*/
        // more on scope

        int add_two(int a, int b)
        {
                static int count = 1;

                printf("This is the function call : %d \n", count++);
                return (a + b);
        }

        main()
        {
                int i, j = 5;
                for (i = 0; i < 5; i++)
                printf("the result of the addition is as follows %d \n", add_two(i, j));

                return 0;
        }
