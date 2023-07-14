#include <stdio.h>

/**
 *main - A function to print lowercase letters
 *
 *Return: The return values are [a-z]
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
