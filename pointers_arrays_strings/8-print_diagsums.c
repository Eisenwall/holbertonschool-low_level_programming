#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (casted from int[][])
 * @size: size of the square matrix (number of rows/columns)
 *
 * Description: Calculates and prints the sums of the main diagonal and
 * the secondary diagonal of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0, sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
		sum_secondary += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum_main, sum_secondary);
}
