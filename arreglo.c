#include<stdio.h>

void burbuja(int *arreglo, int tam)
{
	int i = 0;
        for(i = 0; i < tam; i++)
                printf("Arreglo [%d] = %d\n", i, *(arreglo+i));
		printf("**************************************\n");
}

void imprimir(int *arreglo, int tam)
{
	int i=0;
	for(i=0; i< tam; i++)
	printf("Arreglo [%d] = %d\n",i,*(arreglo+i));
}

void ordenamiento(int *arreglo, int tam)
{
	int i=0;
	int j=0;
	int temp;
	
	for(i=0; i<tam; i++)
	{
		for(j=i+1; j<tam; j++)
		{
			if (*(arreglo+i)> *(arreglo+j)){
			temp= *(arreglo+i);
			*(arreglo+i)= *(arreglo+j);
			*(arreglo+j)=temp;
			}
		}
	
	}
}

int main()
{
	int arreglo[10];
	arreglo[0]=6;
	arreglo[1]=2;
	arreglo[2]=5;
	arreglo[3]=4;
	arreglo[4]=9;
	arreglo[5]=3;
	arreglo[6]=1;
	arreglo[7]=7;
	arreglo[8]=10;
	arreglo[9]=8;
	burbuja(arreglo,10);
	ordenamiento(arreglo,10);
	imprimir(arreglo,10);
//	printf("Arreglo [%d] = %d\n", i, *(ptr+i));
}



