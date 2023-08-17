#include "function_pointers.h"

/**
 *array_iterator - Executes a function given as a parametr
 *@array: The provided array
 *@size: Size of the array
 *@action: Provided function
 *
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i< size; i++)
	{
		action(array[i]);
	}
}
