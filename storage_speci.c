#include <stdio.h>
/*
int main()
{

int i;
 int x = 0;
 int y = 0;

for (i=0; i<=5; i++){
//static int x = 0;
//static int y = 0;
printf("x=%d, y=%d\n", x++, y++);
}
printf("x=%d, y=%d\n", x, y);
*/

int add_two(int x, int y)
{
static int counter = 1;
static int sum = 0;
printf("This is the function call of %d,\n", counter++);
printf("the previous value of sum is %d,\n", sum);
sum = x + y;
return sum;
}
/* the main function */
main()
{
int i, j;
for (i=0, j=5; i<5; i++, j--)
printf("the addition of %d and %d is %d.\n\n",
i, j, add_two(i, j));
return 0;
}