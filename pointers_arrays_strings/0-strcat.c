#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src including the null byte
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, a = 0;
    while (dest[i] != '\n')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'
    return dest;
}
