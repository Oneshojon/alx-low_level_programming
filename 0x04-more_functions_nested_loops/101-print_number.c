#include "main.h"

/**
 *print_number - This returns all numbers
 *@n: params
 *
 *Returns: The result
 */
void print_number(int n)
{
	int x = 1, digit;
	int leading_zeros = 0;

	/*Handle negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / x >= 10)
	{	
		x *= 10;
	}
	while (x != 0)
	{
		digit = n / x;
		_putchar('0' + digit);
		if (digit == 0 && leading_zeros == 0 && x != 1)
		{
			_putchar('0');
		}
		if (digit != 0)
		{
			leading_zeros = 1; 
		}

		n %= x;
		x /= 10;
	}
	_putchar('\n');
}
