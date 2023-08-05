#include <stdio.h>

/**
 *main - Prints all the arguments it recieves
 *@argc: counts of arguments
 *@argv: pointers to the arguments
 *
 *Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
