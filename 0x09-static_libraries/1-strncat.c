#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: The destination  buffer
 *@src: Source from which the file is coppied
 *@n: maximum bytes to add to dest
 *
 *Return: The destination buffer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
			j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
