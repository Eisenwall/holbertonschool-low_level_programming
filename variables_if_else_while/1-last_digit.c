#include <stdio.h>  // БЫЛО studio.h — ошибка!

int main(void)
{
    int n = 12345;
    int l = n % 10;

    printf("Last digit of %d is %d ", n, l);  // добавлен пробел перед if

    if (l > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (l == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return 0;  // не хватало точки с запятой
}

