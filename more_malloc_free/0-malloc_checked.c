#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - выделяет память с помощью malloc
 * @b: количество байт для выделения
 *
 * Return: указатель на выделенную память
 *         если malloc вернёт NULL — завершить процесс с кодом 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return ptr;
}
