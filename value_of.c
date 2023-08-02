#include <stdio.h>

/**
 *main - Finds the Ascii value of a character
 *
 *Returns zero
 */
int main(void)
{
	char n;

	printf("Enter character: ");
	scanf("%c", &n);
	printf("The ASCII Value of %c is %d: \n", n, n);
	return (0);
}


