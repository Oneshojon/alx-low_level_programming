#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *new_dog - Creates a new dog
 *@name: Name
 *@age: Age
 *@owner: owner
 *
 *Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog)
	{
		newDog->name = strdup(name);
		newDog->age = age;
		newDog->owner = strdup(owner);
		if (!newDog->name || !newDog->owner)
		{
			free(newDog->name);
			free(newDog->owner);
			free(newDog);
			return (NULL);
		}
	}
	return (newDog);
}
