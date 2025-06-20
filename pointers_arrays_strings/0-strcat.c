char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    // Найти конец строки dest
    while (dest[i] != '\0')
        i++;

    // Копировать не более n символов из src
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Завершающий нулевой символ
    dest[i] = '\0';

    return dest;
}
