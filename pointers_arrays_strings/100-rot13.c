#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot[]   = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 52; j++) /* всего 52 буквы: 26 верхних + 26 нижних */
        {
            if (s[i] == alpha[j]) /* <-- Только один if */
            {
                s[i] = rot[j];
                break;
            }
        }
    }

    return (s);
}
