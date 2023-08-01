#include "main.h"
#include <stddef.h>
#include <stdbool.h>

/**
 *_strstr - Locates a substring
 *@haystack: The main string
 *@needle: The substring to search
 *
 *Return: A pointer to the beginning of substr or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *hay_ptr = haystack;
		char *needle_ptr = needle;
		bool found = true;

		while (*needle_ptr != '\0')
		{
			if (*hay_ptr != *needle_ptr)
			{
				found = false;
				break;
			}
			hay_ptr++;
			needle_ptr++;
		}
		if (found)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
