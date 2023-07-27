#include "main.h"

/**
 *leet - Encodes a string
 *@str: Pointer to the string to be encoded
 *
 *Return: A pointer to an encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	int i;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	while (*ptr)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = codes[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
