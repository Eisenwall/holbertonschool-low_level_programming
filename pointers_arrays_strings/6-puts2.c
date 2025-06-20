#include <stdio.h>

// объявляем прототип, если реализация в другом файле
int _putchar(char c);

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
