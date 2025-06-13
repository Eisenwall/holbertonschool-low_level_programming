#include <unistd.h>

/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    return (0);
}
