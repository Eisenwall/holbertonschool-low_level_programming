#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char str[] = "_putchar\n";

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (0);
}
