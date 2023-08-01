#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *set_string - Sets the value os a pointer to a character
 *@s: character
 *@to: pointer
 *
 *Return: Nothing
 */
void set_string(char **s, char *to)
{
	if (s != NULL)

	{
		size_t len = (to != NULL) ? strlen(to) : 0;


		char *new_str = (char *)malloc((len + 1) * sizeof(char));

		if (new_str != NULL)
		{
			if (len > 0)
			{
				strcpy(new_str, to);
			}
			new_str[len] = '\0';


			*s = new_str;
		}
	}
}
