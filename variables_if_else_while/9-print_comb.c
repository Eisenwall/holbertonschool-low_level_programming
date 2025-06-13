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
    char c;
    for (c = '0'; c <= '9'; c++){
        putchar(c);
        putchar(', ');
    }
    putchar('\n');
    return (0);
}
