#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	(void)argc;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int res = a * b;
	printf("%d\n", res);
	return (0);
}

