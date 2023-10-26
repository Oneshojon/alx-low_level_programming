#include "main.h"

/**
 *set_bit - Sets the value of a bit to 1 at a given index
 *@n: The number whose bit at index is to be changed
 *@index: The index to change
 *
 *Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int checker;

	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	checker = 1 << index;
	if (checker & *n)
		return (1);
	*n = (checker | *n);
	return (1);
}
