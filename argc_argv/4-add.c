#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Необходимо подключить для isdigit

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int sum = 0, i, j;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);  // Здесь была ошибка: было argc[i], нужно argv[i]
    }
    printf("%d\n", sum);
    return (0);
}
