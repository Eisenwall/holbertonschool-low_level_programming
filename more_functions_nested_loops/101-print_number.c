#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int last_digit;

	if (n < 0)
	{
		_putchar('-');
		if (n / 10 == 0) /* однозначное отрицательное число */
		{
			_putchar('0' + (-n));
			return;
		}

		last_digit = -(n % 10);
		n = -(n / 10);
	}
	else
	{
		if (n / 10 == 0)
		{
			_putchar('0' + n);
			return;
		}

		last_digit = n % 10;
		n = n / 10;
	}

	print_number(n);
	_putchar('0' + last_digit);
}
