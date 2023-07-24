#include "main.h"

/**
 *_puts - returns the string
 *@str: params
 *
 *Return: The str and a new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
