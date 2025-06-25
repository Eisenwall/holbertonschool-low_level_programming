#include "main.h"

/**
 * wildcmp - compares two strings allowing * as wildcard
 * @s1: first string
 * @s2: second string (can include *)
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		// Пропускаем все подряд идущие * (например, "**" -> "*")
		while (*(s2 + 1) == '*')
			s2++;

		// '*' может соответствовать пустой строке или одному символу из s1
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	// Если символы равны, продолжаем сравнивать дальше
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	// Если символы не равны и нет *, возвращаем 0
	return (0);
}
