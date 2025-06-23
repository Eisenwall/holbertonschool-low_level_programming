/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer that will be set
 * @to: string to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
