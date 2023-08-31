#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *print_binary - prints the binary representation of a number
 *@n: The given number
 *
 *Return: Nothing
 */
void print_binary(unsigned long int n)
{
	char b;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	b = (n & 1) ? '1' : '0';
	_putchar(b);
}
