#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 with first n bytes of s2
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 * @n: max number of bytes to take from s2
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, len_total;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    len_total = len1 + n;

    result = malloc(len_total + 1);
    if (result == NULL)
        return (NULL);

    memcpy(result, s1, len1);
    memcpy(result + len1, s2, n);

    result[len_total] = '\0';

    return (result);
}
