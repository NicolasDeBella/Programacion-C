/*
 ============================================================================
 Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int resultado;


	numeroUno=50;
	numeroDos=100;
	resultado=numeroUno+numeroDos;

	printf("%d",resultado);

	return 0;
}
