/*
 ============================================================================
Ejercicio 3-1:
Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float numeroFlotante (int num);
int main(void) {
	setbuf(stdout,NULL);
	int numero;
	float resultado;


	printf("Ingrese un numero : ");
	scanf("%d",&numero);
	resultado = numeroFlotante (numero);
	printf("El resultado final es %f",resultado);


	return 0;
}

float numeroFlotante (int num)
{
	float resultado;

	resultado=num;
	return resultado;
}
