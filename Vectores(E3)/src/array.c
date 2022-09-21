/*
 * array.c
 *
 *  Created on: 20 sep. 2022
 *      Author: nico9
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargarArray(int array[], int longitud)
{
	int i;
	for(i=0;i<longitud;i++)
	{
		printf("Ingrese 10 numeros: ");
		scanf("%d",&array[i]);
	}
}

int imprimirArray(int array[], int longitud)
{
	int i;
	int retorno=0;

	if(array != NULL)
	{
		for(i = 0; i < longitud;i++){

		printf("Iteracion numero: %d\n", i);
		printf("El valor es: %d\n", array[i]);
		retorno=1;
		}
	}
	return 0;
}

int inicializarArray (int array[], int len, int numero)
{
	int retorno=0;
	int i=0;

	if(array!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			array[i]=numero;
		}

	}
	return retorno;
}


float promediarArray(int array[], int longitud)
{
	int resultado;
	int i;
	int acumulador=0;
	for(i=0;i<longitud;i++)
	{
		acumulador=acumulador+array[i];
	}
	resultado=acumulador/longitud;

	return resultado;
}

int arrayPares(int pares[], int longitud)
{

	int i;

	for(i = 0; i < longitud;i++){

				if( pares[i]%2==0)
				{

				    printf("Numero par : %d\n", pares[i]);
				}
	}

		return 0;

}

