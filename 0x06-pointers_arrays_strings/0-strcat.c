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
	int k;
	int n = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		j++;
	}
	k = i;
	while (n <= j)
	{
		while (k <= i + j)
		{
			dest[k] = src[n];
			k++;
			break;
		}
		n++;
	}
	return (dest);
}
