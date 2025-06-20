/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value represented by the string, or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0;
	unsigned int result = 0;

	/* Проходим по строке */
	while (s[i] != '\0')
	{
		/* Учитываем знаки + и - до начала числа */
		if (s[i] == '-' && !num_started)
			sign = -sign;
		else if (s[i] == '+' && !num_started)
			; /* знак плюс просто игнорируем */
		/* Если символ — цифра */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			result = result * 10 + (s[i] - '0');
		}
		/* Если число уже началось, а дальше не цифра — заканчиваем */
		else if (num_started)
			break;
		i++;
	}
	return (sign * (int)result);
}
