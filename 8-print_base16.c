#include <stdio.h>

/* Program that prints hexadecimal character
using only putchar
*/

int main(void)
{
	char a = 0;
	int i = 0;
	
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + a);
		a++;
	}
	int b = 97; /*ASCII*/
	for (i = 0; i <= 5; i++)
	{
		putchar(b);
		b++;
	}
}