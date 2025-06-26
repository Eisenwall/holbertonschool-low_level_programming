#include "main.h"
#include <limits.h>  /* for INT_MIN */

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	if (n == INT_MIN)  /* Special case for INT_MIN */
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;  /* Convert to positive number to print */
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;  /* Make the number positive for further processing */
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);  /* Recursively call with the quotient */
	}

	_putchar((n % 10) + '0');  /* Print the last digit by getting remainder */
}
