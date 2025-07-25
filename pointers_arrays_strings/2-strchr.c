#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to locate
 *
 * Description: This function returns a pointer to the first
 * occurrence of the character c in the string s, or NULL
 * if the character is not found.
 *
 * Return: pointer to the located character in s, or NULL if not found
 */
#include <string.h>
char	*_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
