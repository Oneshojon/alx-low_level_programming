#include "main.h"

/**
 *_strlen_recursion - Counts the characters in a string
 *@s: String whose values are to be counted
 *
 *Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
