#include "main.h"

/**
 *get_endianness - checks for little or big endian
 *
 *Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
