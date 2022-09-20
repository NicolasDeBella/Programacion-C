/*
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros[5];
	int i=0;
	int suma=0;


	for(i=0;i<5;i++)
	{
		printf("Ingrese cinco numeros: ");
		scanf("%d",&arrayNumeros[i]);


	}

	for(i=0;i<5;i++)
	{
		suma=suma+arrayNumeros[i];

	}
		printf("La suma es: %d", suma);

	return EXIT_SUCCESS;
}
