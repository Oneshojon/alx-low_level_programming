#include "main.h"

/**
 *print_alphabet_x10 - REturns values of a-z
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}	
