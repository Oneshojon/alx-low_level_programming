#include <stdio.h>
#include "main.h"
/**
 *is_positive_num - Checks for positive num
 *@str: Str to check
 *
 *Return: an int
 */

int is_positive_num(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 *main - multiplies two numbers
 *@argc: number of arguments provided
 *@argv: array of pointers to arguments
 *
 *Return: nothing
 */



int main(int argc, char argv)
{
	if (argc != 3)
	{
		printf("Error\m");
		return (98);
	}
	if (!is_positive_num(argv[1]) || !s_positive_num(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	unsigned long long num1 = strtoull(argv[1], NULL, 10);
	unsigned long long num2 = strtoull(argv[2], NULL, 10);

	printf("%llu\", num1 * num2);
	return (0);
}
