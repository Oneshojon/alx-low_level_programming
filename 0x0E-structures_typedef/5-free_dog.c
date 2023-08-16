#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_deg - Free the momories allocated to dog_t
 *@d: pointer to a new dog
 *
 *Return: an empty pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
