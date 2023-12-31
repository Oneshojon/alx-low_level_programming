#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_calloc - Allocates memory for an arry
 *@nmemb: length of the array
 *@size: size in bytes of each member of the array
 *
 *Return: Pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (count = 0; count < nmemb * size; count++)
		arr[count] = 0;
	return (arr);
}
