#include "main.h"
#include <stddef.h>

/**
 *flip_bits - returns the number of bits to flip to
 *change a number to another
 *@n: number1
 *@m: Number2
 *
 *Return: a value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
/**
 *countSetBits - Counter
 *@d: value
 *
 *Return: Counts
 */
int countSetBits(unsigned long int d)


{
	int count = 0;

	while (d > 0)
	{
		count++;
		d &= (d - 1);
	}
	return (count);
}
