#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *check_positive_n - checks for a positive integer
 *@ptr: pointer to the string beign checked
 *
 *Return: 1 for true
 */
int check_positive_n(char *ptr)
{
	while (*ptr)
	{
		if (!isdigit(*ptr))
		{
			return (0);
		}
		ptr++;
	}
	return (1);
}
/**
 *main - ltiplies two positive numbers
 *@argc: Number of arguments in the command
 *@argv: array of pointers to the arguments
 *
 *Return: Nothing
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2;


	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!check_positive_n(argv[1]) || !check_positive_n(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);
	printf("%lu\n", num1 * num2);
	return (0);
}
