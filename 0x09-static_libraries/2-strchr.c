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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);

}
