/*
 ============================================================================
 Ejercicio2: ingresar 3 números y mostrar cuál de los tres es el mayor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese un numero: ");
	scanf("%d", &numeroDos);
	printf("Ingrese un numero: ");
	scanf("%d", &numeroTres);

	if(numeroUno>numeroDos && numeroUno>numeroTres)
	{
		resultado=numeroUno;
	}else
	{
		if(numeroDos>numeroUno && numeroDos>numeroTres)
		{
			resultado=numeroDos;
		}else
		{
			resultado=numeroTres;
		}


	}

	printf("El numero mas grande es: %d",resultado);
	return EXIT_SUCCESS;
}
