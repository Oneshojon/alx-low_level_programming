#include "main.h"

/**
 *print_triangle - check the code
 *@size: params
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= size; k++)
		{
			i = size - k;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			for (j = 0; j < k; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
