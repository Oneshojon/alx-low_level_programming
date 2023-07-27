#include "main.h"

/**
 *print_number - prints numbers in a string
 *@n: string of ASCII characters
 *
 *Return: Nothing
 */
void print_number(int n)
{
	unsigned int i = 10;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
		_putchar(n + '0');
	else
	{
		while (n / i >= 10)
		{
			i *= 10;
		}
		while (i != 0)

		{
			digit = n / i;
			_putchar(digit + '0');
			n %= i;
			i /= 10;
		}
	}
}
