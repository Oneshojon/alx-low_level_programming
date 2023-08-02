#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;
	p = &c;
	c = 'H';
	printf("value of c before func: %c\n", c);
	printf("memory address of c b4: %p\n", &c);
	printf("value of p b4: %p\n", p);
	printf("location of ccc: ");
	printf("value of cc:");
	modif_my_char_var(p, c);
	printf("value of c after: %c\n", c);
	printf("memory of c after: %p\n", &c);
	printf("Value of p again: %p\n", p);
	return (0);
}
