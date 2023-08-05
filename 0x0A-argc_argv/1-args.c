#include <stdio.h>

/**
 *main - prints the name of the function followed by a line
 *@argc: Number of arguments in the program
 *@argv: An array of pointers to the arguments
 *
 *Return: Nothing
 */
int main(int argc, char __attribute__ ((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
