#include <stdio.h>

int variable;
int *apuntador;

int suma(int a, int b, int c)
{
	c = a + b;
	return c;
}
int main()
{
	 int a,b,c;
 	 a=1;
	 b=2;
	 c=0;
	 suma(a,b,c);
	 printf("\nEl resultado es: %d\n",c)
}
