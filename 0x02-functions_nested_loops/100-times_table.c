#include "main.h"

/**
 *print_times_table - Prints the n - times Table
 *@n: The only parameter
 *
 *Reurn: Zero always
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, y, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j<= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + k);
					}
					else
					{
						_putchar('0' + k);
					}
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else
				{
					y = k / 10;
					_putchar('0' + k / 100);
					_putchar('0' + y % 10);
					_putchar('0' + k % 10);
				}
				if (j != n)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
