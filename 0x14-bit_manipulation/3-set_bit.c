#include "main.h"
#include "stddef.h"

/**
 *set_bit - Sets the value at a given index to 1
 *@n: The binary
 *@index: The index to set
 *
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits;
	unsigned long int mask;

	num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;

	*n |= mask;

	return (1);
}