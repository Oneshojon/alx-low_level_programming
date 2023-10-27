#include "main.h"
#include <string.h>

/**
 *binary_to_uint - converts binary number to unsigned integer
 *@b: pointer to string of 0/1 characters
 *
 *Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int count = 0;
	int power;

	if (b == NULL)
		return (0);
	power = strlen(b) - 1;
	while (b[count])
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		number += (b[count] - '0') * (1u << power);
		power -= 1;
		count += 1;
	}
	return (number);
}
