#include <stdio.h>

int multifunction(int list[][6], int a, int b);
int multi_function(int *list, int a, int b);

main()
{
	int list[2][6] = {2, 3, 4, 5, 6, 7,
    		          8, 10, 11, 1, 3, 9};

        int *ptr_arr;

        printf("The summation of the array1 is %d\n", multifunction(list, 2, 6));

	ptr_arr = list;

        printf("The summation of the array2 is %d\n", multifunction(ptr_arr, 2, 6));

        return (0);
}

int multifunction(int list[][6], int a, int b)
{
	int i, j, sum = 0;

	for (i = 0; i < a; i++)
	    for (j = 0; j < b; j++)
  		    sum += list[i][j];

	       return (sum);

}

multi_function(int *list, int a, int b)
{
	int i, j, sum = 0;

	for (i = 0; i < a; i++)
	    for (j = 0; j < b; j++)
	        sum += *(list + i * b + j);
	return (sum);
}