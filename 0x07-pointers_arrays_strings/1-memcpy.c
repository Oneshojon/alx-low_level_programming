#include "main.h"

/**
 *_memcpy _ Copies memory area
 *@dest: The destination coppied to
 *@src: Where memory is coppied from
 *@n: Mximum bytes to be coppied
 *
 *Return: A pointer to destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		(*(dest + i) = *(src + i));
		i++;
	}
	return (dest);
}
