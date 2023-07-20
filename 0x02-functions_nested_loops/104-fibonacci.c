#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long next_fib;
	int steps = 0;

	printf("%llu, ", fib1);
	printf("%llu, ", fib2);
	while (steps < 96)
	{
		next_fib = fib1 + fib2;
		printf("%llu", next_fib);
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
