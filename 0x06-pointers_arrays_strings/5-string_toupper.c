#include "main.h"

/**
 *string_toupper - Changes all lower case letter to upper case
 *@s: pointr to string
 *
 *Return: A string with all lowercase alphabets in uppercase
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (s);
}
