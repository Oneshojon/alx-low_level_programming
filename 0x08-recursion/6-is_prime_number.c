#include "main.h"

/**
 *checker - checks a number, returns 1 if n is prime else returns -1
 *@n: The number to be checked
 *@x: number to increment while checking
 *
 *Return: 1 or -1
 */
int checker(int x, int n)
{
	if (n < 2 || (n % x == 0 && x < n))
	{
		return (0);
	}
	if (x * x < n)
		return (checker(x + 1, n));
	return (1);
}

/**
 *is_prime_number - Checks n to see if it is a prime numer
 *@n: The number to be checked
 *
 *Return: 1 if n is prime, else return -1
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
