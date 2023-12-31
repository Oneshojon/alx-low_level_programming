#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: The minimum value provided
 *@max: The max value provided
 *
 *Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff = max - min + 1;
	int j;

	if (min > max)
		return (NULL);
	arr = malloc(diff * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < diff; j++)
	{
		arr[j] = min;
		min += 1;
	}
	return (arr);
}
