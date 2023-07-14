#include <stdio.h>

/**
 *main - reverse alphabets
 *
 *Return: Will return alphabet
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

