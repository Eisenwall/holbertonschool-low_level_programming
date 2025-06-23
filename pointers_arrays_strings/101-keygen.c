#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a valid password for 101-crackme
 * Return: 0 on success
 */
int main(void)
{
    int sum = 0;
    int target = 2772;
    char c;

    srand(time(NULL));

    while (sum < target - 122) // 122 - максимальный ASCII (z)
    {
        c = rand() % 78 + 48; // генерируем от '0'(48) до 'z'(122)
        sum += c;
        printf("%c", c);
    }

    // последний символ, чтобы сумма стала ровно 2772
    printf("%c", target - sum);

    return 0;
}
