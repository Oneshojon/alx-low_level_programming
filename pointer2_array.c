#include <stdio.h>

/**
   * main - Solve me
    *
     * Return: Always 0.
      */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("The value of a[0] is: %d\n", *a);
	printf("The value of a[1] is: %d\n", *(a+1));
	printf("The value of a[2] is: %d\n", *(a+2));
	printf("The value of a[3] is: %d\n", *(a+3));
	printf("The value of a[4] is: %d\n", *(a+4));
	printf("The values of a[1] and a[3] being changed\n\n");
	p = a + 1;
	*p = 98;  
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("After Changing the values of a[1] and [a3]\n -----------");
	printf("New value of a[1]: %d\n", *(a+1));
	printf("New value of a[3]: %d\n", *(a+3));
	return (0);
}
