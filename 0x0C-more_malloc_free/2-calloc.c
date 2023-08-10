#include <stdlib.h>
#include <stddef.h>

/**
 *_calloc - Allocates memory for an arry
 *@nmemb: length of the array
 *@size: size in bytes of each member of the array
 *
 *Return: Pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
