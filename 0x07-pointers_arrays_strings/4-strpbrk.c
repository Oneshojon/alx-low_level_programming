#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - Searches a string for any of of a set of byte
 *@s: Yhe string
 *@accept: list of bytes to check
 *
 *Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
