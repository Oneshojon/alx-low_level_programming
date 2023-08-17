#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - adds the two values
 *@a: The first value
 *@b: The second value
 *
 *Return: An int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_div - divides the two 
 *@a: The first value
 *@b: The second value
 *
 *Return: An int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_sub - subtracts the two 
 *@a: The first value
 *@b: The second value
 *
 *Return: An int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies the two 
 *@a: The first value
 *@b: The second value
 *
 *Return: An int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_mod - find remainder when a / b 
 *@a: The first value
 *@b: The second value
 *
 *Return: An int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
