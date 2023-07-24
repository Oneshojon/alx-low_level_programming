#include "main.h"

/**
 *print_rev - Prints the reverse of the provided str
 *@s: Params
 *
 *Returns: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;
	int x;


	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	_putchar('\0');
	for (x = count; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
