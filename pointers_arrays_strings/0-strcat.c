char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* Найти конец строки dest */
    while (dest[i] != '\0')
        i++;

    /* Копировать src в конец dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Завершающий нулевой символ */
    dest[i] = '\0';

    return dest;
}
