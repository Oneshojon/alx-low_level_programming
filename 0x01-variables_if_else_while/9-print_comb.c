#include <stdio.h>

/**
 *main - This will print all numbers
 *
 *Return: The numers0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
 */
int main(void)
{
	int val = '0';

	while (val <= '9')
	{
		putchar(val);
		if  (val != '9')
		{
			putchar(',');
			putchar(' ');
		}
		val++;
	}
	putchar('\n');
	return (0);
}
