/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the input string
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}
