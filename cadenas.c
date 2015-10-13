#include<stdio.h>

char *meses[1]= {"Hola mundo"};//,"Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre", "Noviembre","Diciembre"
int i, j;
char *aux;

void contarletras()
{	
	for(i = 0; i < 1; i++)
	{
	 	j = 0;
		aux = meses[i];
		while(*(aux+j) != '\0')
	 	{
		     j++;
	 	}
		printf("%d",j);
	}
}

void main()
{	
	for(i = 0; i < 1; i++)
	{
	 	j = 0;
		aux = meses[i];
		while(*(aux+j) != '\0')
	 	{
		     j++;
	 	}
		printf("%c",*(aux+j-3));
		printf("%c",*(aux+j-2));
		printf("%c",*(aux+j-1));
		printf("\n");
		
	}
	contarletras();
}
