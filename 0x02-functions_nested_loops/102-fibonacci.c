#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	int i = 0;
	long j = 0, k = 1, f;

	while (i < 50)
	{
		f = j + k;
		printf("%ld", f);
		if (i != 49)
		{
			printf(" ,");
		}
		j = k;
		k = f;
		i++;
	}
	putchar('\n');
	return (0);
}
