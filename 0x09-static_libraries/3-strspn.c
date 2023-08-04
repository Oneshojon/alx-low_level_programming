#include "main.h"

/**
 *_strspn - Returns the nuber of bytes in a sub-string
 *@s: The full string
 *@accept: stop point
 *
 *Return: A count of chracters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				i++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			break;
		}
		s++;
	}
	return (i);
}
