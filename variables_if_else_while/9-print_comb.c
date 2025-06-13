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
    int c;
    for (c = 0; c <= 9; c++){
        putchar('0' + c);
        if (c != 9){
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}
