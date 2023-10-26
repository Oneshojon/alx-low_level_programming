#include "main.h"

/**
 *clear_bit - Sets the value of bit to 0 at a given index
 *@n: The given number
 *@index: The index to be changed
 *
 *Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int checker;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	checker = 1 << index;
	if (checker & *n)
	{
		*n = *n ^ checker;
		return (1);
	}
	return (1);
}
