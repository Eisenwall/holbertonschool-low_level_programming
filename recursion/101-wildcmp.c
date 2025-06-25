#include "main.h"

/**
 * wildcmp - compares two strings, where * can replace any string
 * @s1: first string
 * @s2: second string (can contain *)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		/* skip all consecutive '*' */
		while (*s2 == '*')
			s2++;

		if (*s2 == '\0') /* "*" at end can match anything */
			return (1);

		/* try to match * with current s1 char or skip one s1 char */
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2))
				return (1);
			s1++;
		}

		return (0); /* * couldn't match the rest */
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
