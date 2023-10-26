#include "main.h"

/**
 *flip_bits - Returns the number of bits to flit to change n to m
 *@n: The first number
 *@m: The second number
 *
 *Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counts = 0;
	unsigned int diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
			counts += 1;
		diff = diff >> 1;
	}
	return (counts);
}
