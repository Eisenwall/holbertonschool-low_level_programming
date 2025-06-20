#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int l;
	int s;

	l = 0;
	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		s = l / 2;
	else
		s = (l + 1) / 2;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
