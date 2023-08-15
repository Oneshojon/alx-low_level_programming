#ifndef dog_h
#define dog_h

/**
 *struct dog - a structure with dog info
 *@name: Name of the dog
 *@age: Age of dog
 *@owner: The ownwe
 *
 *Description: The dog inf
 */
struct dog

{
	char *name;
	float age;
	char *owner;

};
/*Additional functions*/
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
