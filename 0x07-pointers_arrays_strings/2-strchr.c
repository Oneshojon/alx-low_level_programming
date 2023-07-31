#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locates a specified character in a string
 *@s: The string
 *@c: The character to locate
 *
 *Return: pointer to the 1st occurence of c, or Null if no c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);

}
