#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next_fib;
	int steps = 0;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);
	while (steps < 96)
	{
		next_fib = fib1 + fib2;
		printf("%lu", next_fib);
		if (steps != 95)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = next_fib;
		steps++;
	}
	printf("\n");
	return (0);
}
