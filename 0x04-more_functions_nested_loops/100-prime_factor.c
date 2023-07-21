#include <stdio.h>

/**
 *main - will print the highest prime facor
 *
 *Return: Zero always
 */
int main()
{
	long m_prime;
	long i;
	long num = 612852475143;

	while (num % 2 == 0)
	{
		m_prime = 2;
		num = num / 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			m_prime = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		m_prime = num;
		printf("%ld\n", m_prime);
	}
	return (0);
}
