#include <stdlib.h>

/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		/* Пропускаем пробелы */
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		/* Нашли слово */
		if (str[i] != ' ' && str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k, start, end, word_len, wc;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < wc)
	{
		/* Пропустить пробелы */
		while (str[i] == ' ')
			i++;
		start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;
		end = i;
		word_len = end - start;

		words[j] = malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			/* Очистка при ошибке */
			while (j > 0)
			{
				j--;
				free(words[j]);
			}
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++)
			words[j][k] = str[start + k];
		words[j][k] = '\0';
		j++;
	}
	words[j] = NULL;

	return (words);
}
