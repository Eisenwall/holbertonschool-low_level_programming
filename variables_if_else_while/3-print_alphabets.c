#include <stdio.h>

int main(void)
{
	char c;

	/* печать нижнего регистра */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* печать верхнего регистра */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
