#include "main.h"

/**
 *factorial - Finds the factorial of a given number
 *@n: The number whose factorial is to be found
 *
 *Return: An int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
