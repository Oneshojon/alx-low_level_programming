#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Prints a name
 *@name: Name to be pinted
 *@f: pointer to a function that take char and returns nothing
 *
 *Return: Nothimg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
