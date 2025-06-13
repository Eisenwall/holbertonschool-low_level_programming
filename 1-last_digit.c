#include <studio.h>
int main(void)
{
	int n = 12345
	int l = n % 10

	printf("Last digit of %d is %d", n, l);
	if (l > 5)
	{
		printf("and is greater than 5");
	}
	else if (l == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	return 0
}
