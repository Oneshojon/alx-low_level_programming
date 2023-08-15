#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints a structure dog
 *@d: pointer to the structure
 *
 *Retuen: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nill)\n"));
		d->age ? (printf("Age: %f\n", d->age)) : (printf("Age; (nill)\n"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
