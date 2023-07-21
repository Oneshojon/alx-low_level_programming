#include <stdio.h>

/**
 *main - will print the highest prime facor
 *
 *Return: Zero always
 */
long long int main(void)
{
	long long int m_prime;
	long long int i;
	long long int num = 612852475143;

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
		printf("%lld\n", m_prime);
	}
}
