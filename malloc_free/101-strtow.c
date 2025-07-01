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
		while (str[i] == ' ' && str[i] != '\0')
			i++;
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
 * extract_word - allocates memory and copies a word 
 * from str[start] to str[end - 1]
 * @str: source string
 * @start: start index
 * @end: end index (exclusive)
 *
 * Return: pointer to the new word or NULL on failure
 */
char *extract_word(char *str, int start, int end)
{
	int i;
	char *word = malloc((end - start + 1) * sizeof(char));

	if (word == NULL)
		return (NULL);

	for (i = 0; start < end; start++, i++)
		word[i] = str[start];

	word[i] = '\0';
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of words, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, start, end, wc;

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
		while (str[i] == ' ')
			i++;
		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		end = i;

		words[j] = extract_word(str, start, end);
		if (words[j] == NULL)
		{
			while (j > 0)
				free(words[--j]);
			free(words);
			return (NULL);
		}
		j++;
	}
	words[j] = NULL;
	return (words);
}
