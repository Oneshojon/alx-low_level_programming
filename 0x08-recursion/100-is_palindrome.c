#include "main.h"
#include <string.h>

/**
 *is_palindrome_helper - Helps the main function to check for palindrome
 *@start: The string to be checked begining addree
 *@end: String end address
 *
 *Return: 1 or 0
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}
/**
 *is_palindrome - checks if string is pailindrome
 *@s: String to be checked
 *
 *Return: 1 0r 0
 */
int is_palindrome(char *s)
{
	if (strlen(s) == 0)
		return (1);
	return (is_palindrome_helper(s, s + strlen(s) - 1));
}
