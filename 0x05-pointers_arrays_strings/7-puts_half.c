#include "main.h"

/**
 *puts_half - prints last half of a string
 *@str: params
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, k;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i - 1) % 2 == 0)
	{
		k = (i - 1) / 2 + 1;
		for (j = k; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		k = (i - 2) / 2 + 1;
		for (j = k; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
