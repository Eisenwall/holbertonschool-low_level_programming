#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to print
 */
void puts2(char *str)
{
	int r = 0;
	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r += 2;
	}
	_putchar('\n');
}
