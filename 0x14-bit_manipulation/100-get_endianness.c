# include "main.h"

/**
 *get_endianness - Checks for endianess
 *
 *Return: 1 or 0
 */
int get_endianness(void)
{
	int value = 1;
	char *check = (char *)&value;

	if (*check == 1)
		return (1);
	else
		return (0);
}
