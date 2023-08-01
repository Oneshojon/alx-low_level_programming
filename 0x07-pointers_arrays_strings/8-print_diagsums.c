#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Returns the sum of the diagonals of a square
 *@a: Params
 *@size: size of square
 *
 *Return: he sum
 */
void print_diagsums(int *a, int size)
{
	int sum_p = 0;
	int sum_s = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_p += a[i * size + i];

		sum_s += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_p, sum_s);
}
