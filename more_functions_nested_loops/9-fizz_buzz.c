#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *        but replaces multiples of 3 with "Fizz",
 *        multiples of 5 with "Buzz", and
 *        multiples of both with "FizzBuzz"
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
