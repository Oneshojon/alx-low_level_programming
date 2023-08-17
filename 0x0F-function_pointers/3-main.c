#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - athe main function
 *@argv: arrays of pointers to arguments
 *@argc: Number of arguments
 *Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*pt)(int , int);

	if (argc != 4)
	{
		printf("Errror\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	pt = get_op_func(argv[2]);
	if (pt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", pt(i, j));
	return (0);
}
