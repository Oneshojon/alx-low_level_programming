#include "main.h"
#include <stddef.h>

/**
 *get_bit - returns the value of bit at a given index
 *@n: The given integer
 *@index: The index to check
 *
 *Return: The value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned int num_bits;
	unsigned long int mask;

	num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}
