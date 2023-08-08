#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *str_concat - concats s1 to s2 in a new array
 *@s1: first string
 *@s2: Second string
 *
 *Return: A pointer to the combined string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	arr = malloc((i + j) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	while (k < i)
	{
		arr[k] = (s1[k] ==  NULL) ? '' : s1[k];
		k++;
	}

	while (k < (i + j) && m < j)
	{
		arr[k] = (s2[m] ==  NULL) ? '' : s2[m];
		m++;
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
