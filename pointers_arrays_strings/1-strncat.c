/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string to append
 * @n: maximum number of bytes to use from src
 *
 * Description: Appends at most n bytes from src to the end of dest.
 * If src has n or more bytes, src does not need to be null-terminated.
 * The resulting string in dest is always null-terminated.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the resulting string */
	dest[i] = '\0';

	return (dest);
}
