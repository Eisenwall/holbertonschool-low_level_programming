#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(a);
	printf("\n");
}
