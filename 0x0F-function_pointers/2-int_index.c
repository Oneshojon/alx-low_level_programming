#include "function_pointers.h"

/**
 *int_index - Seaches for an integer
 *@array: The provided array
 *@size: size of the array
 *@cmp: The function that sorts
 *
 *Return: A ppointer to the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return(c);
	}
	return (-1);
}
