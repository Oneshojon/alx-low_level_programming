#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	int i = 0;
	long j = 0, k = 1, f, sum;

	while (i < 50)
	{
		f = j + k;
		if ((f % 2) == 0 && f <= 4000000)
		{
			sum += f;
		}
		if (f > 4000000)
			break;
		j = k;
		k = f;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
