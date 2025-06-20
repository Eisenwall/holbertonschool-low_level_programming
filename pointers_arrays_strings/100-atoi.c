/**
 * _atoi - convert string to int with sign handled inline
 * @s: input string
 *
 * Return: integer value or 0 if no number found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == '-' || s[i] == '+') && !num_started)
		{
			if (s[i] == '-')
				sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;

			/* Добавляем цифру с учетом знака */
			if (sign == 1)
			{
				if (result > (2147483647 - (s[i] - '0')) / 10)
					return (2147483647);
				result = result * 10 + (s[i] - '0');
			}
			else
			{
				if (result < (-2147483648 + (s[i] - '0')) / 10)
					return (-2147483648);
				result = result * 10 - (s[i] - '0');
			}
		}
		else if (num_started)
		{
			break;
		}
		i++;
	}

	return (result);
}
