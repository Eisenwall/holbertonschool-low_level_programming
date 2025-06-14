#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
    int a, b, c;

    for (a = 0; a<= 7; a++)
    {
        for (b = a + 1; b <= 8; b++)
        {
            for (c = b + 1; c <= 9; c++)
            {
                putchar(a + 48);
                putchar(b + 48);
                putchar(c + 48);
                if (!(a == 7 && b == 8 && c == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
