/*
 ============================================================================
 Ejercicio 3-2:
Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int NumerosParEImpar (int numeros);
int main(void) {

	setbuf(stdout,NULL);
	int numeros;
	int resultado;


	printf("Ingrese un numero: ");
	scanf("%d",&numeros);

	resultado=NumerosParEImpar (numeros);
	if(resultado==1)
	{
		printf("El numero es par");

	}else
	{
		printf("El numero es impar");
	}

	return EXIT_SUCCESS;
}

int NumerosParEImpar (int numeros)
{
	int retorno;


	if(numeros%2==0)
	{
		retorno=1;
	}
	else
	{
		retorno=0;
	}

	return retorno;
}
