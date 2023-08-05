#include <stdio.h>

/**
 *main - prints the name of the function followed by a line
 *@argc: Number of arguments in the program
 *@argv: An array of pointers to the arguments
 *
 *Return: Nothing
 */
int main(int __attribute__ ((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
