#include "main.h"
/**
 *_strncpy - Copies some byte from a source to a destination buffer
 *@dest: The destination buffer where characters are are pasted
 *@src: The source file from which character are coppied
 *@n: The maximum byte to be copied
 *
 *Return: Returns the buffer to the destination (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/*After filling the destination with all the souces bytes, the*/
	/*the remaining of bytes from (n) is filled with null characters*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
