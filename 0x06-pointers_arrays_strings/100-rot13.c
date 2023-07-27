#include "main.h"

/**
 *rot13 - Encodes a string
 *@str: Pointer to the string to be encoded
 *
 *Return: The pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;
	char letters[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char code[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	char *ptr = str;

	while (*ptr)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = code[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
