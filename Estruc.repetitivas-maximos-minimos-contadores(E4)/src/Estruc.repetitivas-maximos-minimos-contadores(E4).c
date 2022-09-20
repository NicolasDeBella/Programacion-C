/*
 ============================================================================
Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char letraIngresada;
	 int contadorLetras = 0;

	    for(int i=0; i<5; i++)
	    {
	        printf("Ingrese una letra:");
	        fflush(stdin);

	        scanf("%c", &letraIngresada);

	        if(letraIngresada=='p')
	        {
	            contadorLetras++;
	        }
	    }
	    printf("La cantidad de 'p' ingresadas es: %d", contadorLetras);

	return EXIT_SUCCESS;
}
