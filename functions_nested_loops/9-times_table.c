#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++) /* строки 0..9 */
	{
		for (j = 0; j <= 9; j++) /* столбцы 0..9 */
		{
			product = i * j;

			if (j == 0)
			{
				_putchar(product + '0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
