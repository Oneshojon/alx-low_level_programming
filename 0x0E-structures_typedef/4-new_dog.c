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

	if (newDog == NULL)
		return (NULL)
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
