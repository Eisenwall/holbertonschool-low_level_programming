#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer represented by the string or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !num_started)
			sign = -sign;
		else if (s[i] == '+' && !num_started)
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			int digit = s[i] - '0';

			/* Проверка переполнения */
			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (result > ((unsigned int)(-(INT_MIN + digit))) / 10)
					return (INT_MIN);
			}

			result = result * 10 + digit;
		}
		else if (num_started)
			break;
		i++;
	}
	return (sign * (int)result);
}
