/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value represented by the string, or 0 if none found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, sign_count = 0, num_started = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == '-' || s[i] == '+') && !num_started)
		{
			if (s[i] == '-')
				sign_count++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (num_started)
		{
			break;
		}
		i++;
	}

	if (sign_count % 2 != 0)
		sign = -1;

	return (sign * (int)result);
}
