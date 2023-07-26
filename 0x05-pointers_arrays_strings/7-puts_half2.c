#include "main.h"

/**
 *puts_half - prints last half of a string
 *@str: params
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, k, m;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		k = i / 2;
		for (m = k; str[m] != '\0'; m++)
		{
			_putchar(str[m]);
		}
	}
	else
	{
		k = (i - 1) / 2;
		for (j = k; j < i - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
