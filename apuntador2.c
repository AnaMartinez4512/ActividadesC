#include <stdio.h>

int suma(int a, int b, int *resultado)
{
        *resultado = a + b;
        return *resultado;
}
int main()
{
         int a,b,c;
         a=1;
         b=2;
         c=0;
         suma(a,b,&c);
         printf("\nEl resultado es: %d\n",c);
}




