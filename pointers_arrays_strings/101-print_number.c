#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	int pow10 = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
			n = -n
	}

	while ((num / pow10) >= 10)
		pow10 *= 10;

	while (pow10 > 0)
	{
		_putchar('0' + (num / pow10));
		num %= pow10;
		pow10 /= 10;
	}
}
