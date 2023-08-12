#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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



int main(int argc, char *argv[])
{
	unsigned long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_positive_num(argv[1]) || !is_positive_num(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);
	return (0);
}
