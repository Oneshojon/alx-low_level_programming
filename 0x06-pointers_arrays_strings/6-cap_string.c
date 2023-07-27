#include "main.h"

/**
 *cap_string - Returns strng with capitalised words
 *@str: String as parameter
 *
 *Return: pointer to string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int i = 0;

	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - ('a' - 'A');
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t'|| str[i] == ',' ||
		str[i] == '\n' || str[i] == ';' || str[i] == '.' || str[i]
		== '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
		|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] && (str[i + 1] >= 'a' && str[i + 1]
			<= 'z'))
				str[i + 1] = str[i + 1] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}


