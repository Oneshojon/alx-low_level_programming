#include <stdio.h>
/**
 *main - This returns the value of a character
 *
 */
int main()
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	printf("ASCII value of %c = %d\n", c, c);
	return (0);
}
