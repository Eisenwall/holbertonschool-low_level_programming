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
    char str[] = "_putchtar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    return (0);
}
