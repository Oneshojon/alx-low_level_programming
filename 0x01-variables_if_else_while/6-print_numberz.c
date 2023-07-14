# include <stdio.h>

/**
 *main - will print values using putchar
 *
 *Return: This will return all values
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
