#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 * Return: Always 0
 */
int main(void)
{
    char key[7];
    int i, sum = 0;

    srand(time(NULL));

    /* Генерируем первые 5 символов */
    for (i = 0; i < 5; i++)
    {
        key[i] = 33 + rand() % 94; /* символы из ASCII от 33 до 126 */
        sum += key[i];
    }

    /* 6-й символ так, чтобы сумма всех символов была равна 'sum' по формуле из crackme */
    key[5] = (sum % 94) + 33;

    key[6] = '\0';

    printf("%s\n", key);
    return (0);
}
