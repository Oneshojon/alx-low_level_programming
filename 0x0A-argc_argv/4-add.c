#include <stdio.h>
#include <stdlib.h>

/**
 *main - Adds all positive numbers
 *@argc: argument counts
 *@argv: Pointers to arguments
 *
 *Return: 1 for error, 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
