#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 *string_nconcat - Contact two strings on a new pointer
 *@s1: The first str
 *@s2: THe second str
 *@n: Amount of byte to ad from s2
 *
 *Return: Pointer to the concat solution
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		len = strlen(s2) + strlen(s1) + 1;
	else
		len = n + strlen(s1) + 1;
	arr = malloc(len * sizeof(char));
		if (arr == NULL)
			return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < len - i - 1; j++)
	{
		arr[i + j] = s2[j];
	}
	arr[len - 1] = '\0';
	return (arr);
}
