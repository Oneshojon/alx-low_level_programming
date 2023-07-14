#include <stdio.h>

/**
 *main - This function will print all the alphabets
 *
 *Return: The return value are known
 */
int main(void)
{
	char cap = 'A';
	char sml = 'a';

	while (sml <= 'z')
	{
		putchar(sml);
		sml++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
return (0);
}
