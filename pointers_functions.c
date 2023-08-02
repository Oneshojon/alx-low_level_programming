#include <stdio.h>

/**
  * modif_my_char_var - Solve me
  *
  * Return: nothing.
  */
void modif_my_char_var(char *cc)  
{

	*cc = 'o';
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
	  printf("the value of 'c' before the call is %c\n", c);
	  printf("The adress of 'c' before call is : %p\n", &c);
	  printf("The value of 'p' before call is : %p\n", p);
	  modif_my_char_var(p);
	  printf("The value of c after call is : %c\n", c);
	  printf("The value of 'p' after call is : %p\n", p);
	  return (0);

}
