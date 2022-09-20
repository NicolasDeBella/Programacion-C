/*
Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 */

#include <stdio.h>
#include <stdlib.h>
int pedirEntero(int*direccionDeVariableDeRetorno);
int main(void) {
	setbuf(stdout,NULL);

	int resultado;
	int valorDeLaFuncion;



	valorDeLaFuncion=pedirEntero(&resultado);
	if(valorDeLaFuncion==1)
	{
		printf("El numero ingresado es: %d",resultado);
	}else
	{
		printf("El numero es menor a 0");
	}


	return EXIT_SUCCESS;
}

int pedirEntero(int*direccionDeVariableDeRetorno)
{
	int numeroEntero;
	int retorno;
	int resultado;
	printf("Ingrese un numero entero mayor a 0: ");
	scanf("%d",&numeroEntero);
	if(numeroEntero>0)
	{
		resultado=numeroEntero;
		*direccionDeVariableDeRetorno=resultado;
		retorno=1;
	}else
	{
		retorno=0;
	}


	return retorno;
}
