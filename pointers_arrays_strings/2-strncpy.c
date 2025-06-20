/**
 * _strncpy - copies a string
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * @n: maximum number of bytes to copy from src
 *
 * Description: Copies at most n bytes from src to dest. If src is less than
 * n bytes long, the remainder of dest is filled with '\0' bytes.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Если src меньше n, заполняем остаток нулями */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
