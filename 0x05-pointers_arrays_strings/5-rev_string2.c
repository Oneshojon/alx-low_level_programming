#include "main.h"

/**
 *rev_string - reverses a string
 *@s: params
 *
 *Return Nothing
 */
void rev_string(char *s)
{

	char  tmp;
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; j < k / 2; j++)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k] = tmp;
		k--;
	}
}
