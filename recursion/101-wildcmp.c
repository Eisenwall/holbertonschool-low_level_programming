#include "main.h"

/**
 * wildcmp - compares two strings, supports '*' as wildcard
 * @s1: first string
 * @s2: second string, may contain '*'
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		/* skip all '*' by calling wildcmp with s2+1 */
		if (wildcmp(s1, s2 + 1))
			return (1);
		/* if s1 not finished, try to match s1+1 with s2 (keeping *) */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
