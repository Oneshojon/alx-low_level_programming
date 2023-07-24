#include "main.h"

/**
 *_strlen - Returns the length of a str
 *@s: params
 *
 *Return: lengh of the string
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
