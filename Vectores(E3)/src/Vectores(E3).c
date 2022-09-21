/*
Ejercicio 5-3:
Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
(Según la recta numérica de los reales, hasta llegar a cero).
Utilizar funciones y vectores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

void cargarAleatoriaArray (int array[], int longitud,int valor, int i);


int main(void) {
	setbuf(stdout,NULL);

	int numeros[10];
	int retorno;

	inicializarArray(numeros,10,0);
	retorno=imprimirArray(numeros,10);
	if(retorno==1)
	{
		printf("%d",retorno);
	}else
	{
		printf("No se pudo cargar");
	}

	while(<10)
	{
		cargarAleatoriaArray()
	}



		return EXIT_SUCCESS;
}

void cargarAleatoriaArray (int array[], int longitud,int valor, int i)
{

	if(array!=NULL && longitud>0 && i<longitud)
	{
		array[i]=valor;
	}

}

