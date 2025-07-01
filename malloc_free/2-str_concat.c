#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated string
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 *
 * Return: pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate memory */
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copy s1 */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy s2 */
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
