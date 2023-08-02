#include "main.h"
#include <stdio.h>

/**
 *checker - Checks the base for natural squaroot
 *@n: number is squred and compared to base
 *@base: The number to check if it's perfect square
 *
 *Return: the perfect root or -1
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 *_sqrt_recursion - Returns the perfect root of n
 *@n: The number to be checked if it has a perfect root
 *
 *Return: The natural root or -1 if no root
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
