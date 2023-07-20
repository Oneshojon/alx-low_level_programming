#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long next_fib;
	int steps = 0;

	printf("%ld, ", fib1);
	printf("%ld, ", fib2);
	while (steps < 96)
	{
		next_fib = fib1 + fib2;
		printf("%ld", next_fib);
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
