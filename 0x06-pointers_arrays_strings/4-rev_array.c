#include "main.h"

/**
 *reverse_array - reverses the values of an array
 *@a: Pointer to the array
 *@n: number of elements in the array
 *
 *Return: Buffer of the reversed array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i <= j / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
		i++;
	}
}
