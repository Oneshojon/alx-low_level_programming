#include <stdio.h>

/**
 *main - This will print all numbers
 *
 *Return: we will return 0 - 9
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
