#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Duplicates a str
 *@str: The string to be duplicated
 *
 *Return: A pointer to the new string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned long int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		arr[j] = str[j];
	}
	arr[j] = '\0';
	return (arr);
}
