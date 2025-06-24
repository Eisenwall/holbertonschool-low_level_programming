#include "main.h"
#include <unistd.h> // или используем _putchar

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')        // Базовый случай: если строка закончилась
    {
        _putchar('\n');    // Печатаем перевод строки
        return;
    }

    _putchar(*s);          // Печатаем текущий символ
    _puts_recursion(s + 1); // Рекурсивно вызываем для следующего символа
}
