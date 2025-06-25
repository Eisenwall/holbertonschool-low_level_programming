#include "main.h"

/**
 * wildcmp - сравнивает строки, где s2 может содержать '*'
 * @s1: первая строка
 * @s2: вторая строка, может содержать '*'
 * Return: 1 если строки совпадают, иначе 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    if (*s2 == '*')
    {
        while (*(s2 + 1) == '*')
            s2++;

        if (wildcmp(s1, s2 + 1))
            return (1);
        if (*s1 != '\0' && wildcmp(s1 + 1, s2))
            return (1);

        return (0);
    }
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));
    return (0);
}
