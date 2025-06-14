#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1_high = 0, f1_low = 1;
	unsigned long f2_high = 0, f2_low = 2;
	unsigned long next_high, next_low;
	int count;

	printf("1, 2, ");

	for (count = 3; count <= 98; count++)
	{
		/* Add low parts */
		next_low = f1_low + f2_low;
		next_high = f1_high + f2_high;

		/* Handle carry from low to high */
		if (next_low >= 1000000000)
		{
			next_low -= 1000000000;
			next_high += 1;
		}

		/* Print with leading zeros if high part exists */
		if (next_high == 0)
			printf("%lu", next_low);
		else
			printf("%lu%09lu", next_high, next_low);

		if (count != 98)
			printf(", ");

		/* Move forward */
		f1_high = f2_high;
		f1_low = f2_low;
		f2_high = next_high;
		f2_low = next_low;
	}
	printf("\n");
	return (0);
}
