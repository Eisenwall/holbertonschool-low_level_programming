/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		/* Проверяем, нужно ли капитализировать текущий символ */
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = 0;
		}
		else if (
			str[i] == ' '  || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ','  || str[i] == ';'  || str[i] == '.'  ||
			str[i] == '!'  || str[i] == '?'  || str[i] == '"'  ||
			str[i] == '('  || str[i] == ')'  || str[i] == '{'  ||
			str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		i++;
	}

	return (str);
}
