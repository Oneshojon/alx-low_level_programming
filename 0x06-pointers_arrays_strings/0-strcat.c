#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: The 1st params
 *@src: The 2nd params
 *
 *Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	while (n < j && dest[n] != '\0') /*The second condition*/
					   /*ill control overflow*/
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
