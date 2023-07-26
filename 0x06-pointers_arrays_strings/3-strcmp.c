#include "main.h"

/**
 *_strcmp - compares string1 and string2
 *@s1: one string
 *@s2: 2nd string
 *
 *Return: 0 if strings are equal, negative value if s1 < s2
 *and positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && (*s1 == *s2)))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
