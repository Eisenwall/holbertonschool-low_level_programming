#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int power = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');

		/* Обход переполнения при n == INT_MIN */
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
			n = -n;
	}

	while ((temp /= 10))
		power *= 10;

	while (power > 0)
	{
		_putchar((n / power) % 10 + '0');
		power /= 10;
	}
}
