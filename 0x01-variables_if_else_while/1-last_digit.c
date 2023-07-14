#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *1-last_digit.c - will evaluate the modulo and check for negative positive or 0
 *
 *Return: is positive, is negative or zero
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
return (0);
}
		
		
