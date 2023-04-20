#include <stdio.h>

/* print all single digits using putchar */

int main(void)
{
	int i;
	int a = 0;
	
	for (i = 0; i < 10; i++)
	{
		putchar('0' + a);
		a++;
		
		if(a < 10)
		{
		
			putchar(44);
			putchar(32);
		}
	}
}