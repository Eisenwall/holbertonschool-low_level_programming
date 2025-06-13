#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * separated by ", " and ends with newline
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        putchar('0' + i); // вывод цифры
        if (i != 9) // только если не последняя цифра
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
    return (0);
}
