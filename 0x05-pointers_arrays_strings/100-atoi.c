#include "main.h"

/**
 *_atoi - Prints the digits in astring
 *@s: Params
 *
 *Return: nothing
 */
int _atoi(char *s)
{
	int i = 0; 
	int j = 0;
	int k = 0;
	int digits;
	int m = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (s[j] == '-')
			k++;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digits = s[j] - '0';
			m = m * 10 + digits;
			if (s[j + 1] < '0' || s[j + 1] > '9')
			{
				if (k % 2)
					m = -m;
				return (m);
			}
		}
		j++;
	}
	return (0);
}
