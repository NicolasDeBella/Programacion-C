/*
Crear una función que pida el ingreso de un entero y lo retorne.
 */

#include <stdio.h>
#include <stdlib.h>
int pedirEntero();

int main(void) {
	setbuf(stdout,NULL);
	int resultado;

	resultado=pedirEntero();
	printf("El retorno del entero es: %d",resultado);

	return EXIT_SUCCESS;
}

int pedirEntero()
{
	int numeroEntero;
	printf("Ingrese un numero entero: ");
	scanf("%d",&numeroEntero);


	return numeroEntero;
}
