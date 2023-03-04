#include <stdio.h>

/*program to print all posible combinations of 
	of three didits without repitation
	and in scending order
	*/
int main(void)
{
	int a ;
	int b ;
	int c ;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					
					putchar(b + '0');
				
					putchar(c + '0');
					
					if(a != 7 || b != 8 || c != 9)
					{
						putchar(44);
						putchar(32);
					}
					
				}
			}
		}
	}
	putchar(10);
	return (0);
}