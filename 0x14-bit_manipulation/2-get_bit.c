#include "main.h"

/**
 *get_bit - returns the bit in a given index
 *@n: the numer
 *@index: The index to get from number as binary
 *Return: The value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
