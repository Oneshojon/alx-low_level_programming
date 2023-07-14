# include <stdio.h>

/**
 *main - will print values using putchar
 *
 *Return: This will return all values
 */
int main(void)
{
	int number = '0';

	while (number < '10')
	{
		putchar('0' + number);
		number++;
	}
	putchar("\n");
	return (0);
}
