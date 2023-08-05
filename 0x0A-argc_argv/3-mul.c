#include <stdio.h>
#include <stdlib.h>

/**
 *main - Will return the product of two numbers
 *@argc: count of arguments
 *@argv: pointers to arguments
 *
 *Return 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;
	printf("%d\n", prod);
	return (0);
}
