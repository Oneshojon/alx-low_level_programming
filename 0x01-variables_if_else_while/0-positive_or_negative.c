#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point for the program
 *n: The nuber to be checked
 *
 *Return: This will return is_positive, or is_negetive
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
return (0);
}
