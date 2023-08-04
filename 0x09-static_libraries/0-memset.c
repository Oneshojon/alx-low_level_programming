#include "main.h"

/**
 *_memset - Fills fills memory with a constant byte.
 *@s: Pointer to the buffer
 *@n: Maximum byte to fill
 *@b: Character to feed in to buffer
 *
 *Return: Apointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i)  = b;
		i++;
	}
	return (s);
}
