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
	int i;
	int j ;
	int temp;

	for (i = 0, j = n -1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
