#include<stdio.h>

int variable;
float arreglo[5];
float leer;

int main ()
{
	printf("Hola Mundo \n");
	printf("Dame un numero: \n");
	scanf("%d",&variable);
	printf("El numero recibido es %d",variable);
	scanf("%f",&leer);
	arreglo[0] = leer;
	printf("El valor flotante es %.1f\n",arreglo[0]);

	return 0;
}
