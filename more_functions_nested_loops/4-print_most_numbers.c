#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - prints numbers from 0 to 9, except 2 and 4
 *
 * Uses only 2 calls to _putchar.
 */
void print_most_numbers(void)
{
    char numbers[] = "01356789";

    /* Вывод всей строки целиком через write (нельзя использовать _putchar для вывода по символам, потому что вызов будет > 2) */
    write(1, numbers, 8);

    /* Первый вызов _putchar - вывод перевода строки */
    _putchar('\n');
}
