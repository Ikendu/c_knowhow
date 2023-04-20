#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a /10 + '0');
			putchar(a % 10 + '0');
			
			putchar(32);

			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if(a != 98 && b != 99)
			{
				putchar(44);
				putchar(32);

			}
			
		}
	}
}