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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
