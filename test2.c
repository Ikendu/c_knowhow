#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */

int main(void)
{
        int ch;

        for (ch = 42; ch <= 64; ch++)
        {
                putchar(ch);
        }
        
        putchar(10);

        return (0);
}
