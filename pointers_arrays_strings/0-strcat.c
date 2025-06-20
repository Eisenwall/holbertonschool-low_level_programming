/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string to append
 *
 * Description: This function appends the string pointed to by src to the
 * end of the string pointed to by dest. The terminating null byte of dest
 * is overwritten and a new terminating null byte is added.
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find end of dest string */
	while (dest[i] != '\0')
		i++;

	/* Append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the resulting string */
	dest[i] = '\0';

	return (dest);
}
