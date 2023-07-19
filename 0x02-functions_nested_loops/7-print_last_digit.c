#include "main.h"

/**
 *print_last_digit - REturns values of a-z
 *@n: IS a parameter
 *
 *Return: Always 0
 */
int print_last_digit(int n)
{
	int dig;

	dig = n % 10;
	if (dig < 0)
	{
		dig = dig * -1;
		_putchar('0' + dig);
	}
	else
	{
	_putchar('0' + dig);
	}
return (dig);
}
