#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
    int i, j;
    char tens, ones;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            tens = (j / 10) + '0';
            ones = (j % 10) + '0';
            if (j >= 10)
                _putchar(tens);
            _putchar(ones);
        }
        _putchar('\n');
    }
}
