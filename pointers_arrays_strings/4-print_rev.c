#include "main.h"

/**
 * print_rev - печатает строку в обратном порядке, затем новую строку
 * @s: указатель на строку
 */
void print_rev(char *s)
{
    int len = 0;
    int i;

    /* Считаем длину строки */
    while (s[len] != '\0')
        len++;

    /* Печатаем символы с конца к началу */
    for (i = len - 1; i >= 0; i--)
        _putchar(s[i]);

    _putchar('\n');
}
