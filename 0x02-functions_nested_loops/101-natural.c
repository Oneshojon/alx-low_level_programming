#include <stdio.h>

/**
 *main - number
 *
 *Return: Zero always
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i > 2 && i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
