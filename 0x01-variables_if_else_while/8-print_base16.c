#include <stdio.h>

/**
 *main - The first 16 hexadecimals
 *
 *Return: All the numbers
 */
int main(void)
{
	char num = '0';
	char alp = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
