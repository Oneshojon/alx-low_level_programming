#include <stdio.h>

/**
 *main - turns the fabonachi numbers
 *
 *Return: Always zer0
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int next_fib;
	int sum_ev_fib = 2;

	while (1)
	{
		next_fib = fib1 + fib2;
		if (next_fib > 4000000)
		{
			break;
		}
		if (next_fib % 2 == 0)
		{
			sum_ev_fib += next_fib;
		}
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%d\n", sum_ev_fib);
	return (0);
}
