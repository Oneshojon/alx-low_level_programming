#include "main.h"

/**
 *_abs - REturns values of a-z
 *@n: IS a parameter
 *
 *Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = -1 * n;
		return (abs);
	}
	else
	{
		return (n);
	}
}
