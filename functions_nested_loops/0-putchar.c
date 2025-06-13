#include <unistd.h>

/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}
