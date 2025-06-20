#include "main.h"  
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
    int r = 0;

    while (str[r] != '\0')
    {
        _putchar(str[r]);
        r += 2;
    }
    _putchar('\n');
}
