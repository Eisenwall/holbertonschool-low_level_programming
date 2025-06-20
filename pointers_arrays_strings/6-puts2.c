#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first
 * @str: input string
 */
void puts2(char *str)
{
    int longi = 0;
    int a = 0;
    int *y = str;
    int b;

    while (*y != str)
    {
	y++;
	longi++;
    }
    t = longi - 1;
    for (o = 0; 0 <= t; o++)
    {
	    if (o % 2 == 0)
	    {
		    _putchar(str[0]);
	    }
    }
    _putchar('\n');
}
