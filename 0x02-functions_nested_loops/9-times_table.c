#include "main.h"

/**
 *times_table - returns time
 *
 *Return: Always 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
