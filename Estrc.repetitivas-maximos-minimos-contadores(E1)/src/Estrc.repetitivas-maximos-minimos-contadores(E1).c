/*
 ============================================================================
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la
aplicación con distintos valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeros;
	int promedio;
	int i;
	int contador=0;
	int acumulador=0;



	for(i=0;i<5;i++)
	{
		contador++;
		printf("Ingrese un numero: ");
		scanf("%d",&numeros);
		acumulador=numeros+acumulador;

	}

	promedio=acumulador/5;
	printf("El promedio es: %d",promedio);
	return 0;

}
