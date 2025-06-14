#include "main.h"

/**
 * print_number - prints a number with formatting for times table
 * @num: number to print
 * @is_first: 1 if first number in the row, 0 otherwise
 */
void print_number(int num, int is_first)
{
	if (is_first)
	{
		if (num >= 10)
		{
			_putchar('0' + num / 10);
			_putchar('0' + num % 10);
		}
		else
		{
			_putchar('0' + num);
		}
	}
	else
	{
		_putchar(',');
		_putchar(' ');

		if (num < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + num);
		}
		else if (num < 100)
		{
			_putchar(' ');
			_putchar('0' + num / 10);
			_putchar('0' + num % 10);
		}
		else
		{
			_putchar('0' + num / 100);
			_putchar('0' + (num / 10) % 10);
			_putchar('0' + num % 10);
		}
	}
}

/**
 * print_times_table - prints the n times table starting with 0
 * @n: size of the times table (0 to 15)
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_number(i * j, j == 0);
		}
		_putchar('\n');
	}
}
