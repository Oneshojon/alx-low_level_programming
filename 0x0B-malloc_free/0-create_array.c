#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - Creates an array of char's and initialize it with c
 *@size: The size of the characters
 *@c: The character to initialize with
 *
 *Return: A pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
