#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 *int_dog - Initialize a variable of type struct dog
 *@d: pointer to the ariable
 *@name: pointer to the dog name
 *@age: Age of the dog
 *@owner: Dog owner
 *
 *Return: an int
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
