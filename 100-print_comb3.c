#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Return 0
 *
 */

int main(void)
{
        int i;
        int j;

        for (i = 0; i <= 9; i++)
        {
                for (j = 0; j <= 9; j++)
                {
                        if (j > i )
                        {
                                putchar(i + 48);
                                //putchar(i  + '0');
                                
                                putchar(j + 48);
                                //putchar(j + '0');
                                
                                if (i != 8 || j != 9)
                                {
                                        putchar(44);
                                        /*putchar(','); */
                                        
                                        putchar(32);
                                        /*putchar(' ') */

                                }
                        }
                }

        }
        putchar(10);

        return (0);

}