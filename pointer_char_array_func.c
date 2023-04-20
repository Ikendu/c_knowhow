#include <stdio.h>

char array_func(char *str2);
char array_func2(char **str3, int size);

int main()
{
	char *str[] = {"Monday",
 	     	     "Tuesday",
		      "Wednesday",
		      "Thursday",
                      "Friday",
                      "Saturday",
                      "Sunday"};

        int i, size = 7;

        for ( i = 0; i < size; i++)
	array_func(str[i]);

	array_func2(str, size);

        return (0);
}
char array_func(char *str1)
{
         printf("%s\n", str1);
}



char array_func2(char **str3, int size)
{
     int i;
     
     for (i = 0; i < size; i++)
     	 printf("%s\n", str3[i]);
}

