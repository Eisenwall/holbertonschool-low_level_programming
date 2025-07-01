#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* Если NULL, считаем пустой строкой */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Вычисляем длины */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Выделяем память под новую строку + '\0' */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Копируем s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Копируем s2 */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
