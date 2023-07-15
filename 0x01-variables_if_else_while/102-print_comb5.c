#include <stdio.h>

/**
 *main - programme
 *
 *Return: Always (0)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = 1; num2 <= 99; num2++)
		{
			if (num1 < num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);
			}
			else
				continue;
			if (num1 == 98 && num2 == 99)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
