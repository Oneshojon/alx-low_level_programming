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
	int i = 0;
	int diff = max - min;
	int j;

	if (min > max)
		return (NULL);
	while (i < diff)
	{
		i++;
	}
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
