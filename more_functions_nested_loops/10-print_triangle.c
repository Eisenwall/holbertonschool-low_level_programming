#include "main.h"

/**
 * print_triangle - prints a triangle using '#' followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* print spaces */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* print hashes */
		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
