#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - Converts a binary number to integer
 *@b: Pointer to the characters
 *
 *Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (result);
}
