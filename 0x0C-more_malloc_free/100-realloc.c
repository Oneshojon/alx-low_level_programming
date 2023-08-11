#include "main.h"
#include <stdlib.h>

/**
 *_realloc - realicate a memory space using malloc and free
 *@ptr: poointer to the previous memory
 *@old_size: size of ptr
 *@new_size: size of the new memory
 *
 *Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int copy_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	copy_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + 1);
	free(ptr);
	return (new_ptr);
}
