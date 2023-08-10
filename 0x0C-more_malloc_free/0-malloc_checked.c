#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 *malloc_checked - Allocates memory using malloc
 *@b: Size of memory
 *
 *Return: pointer to the allocate dmemory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
