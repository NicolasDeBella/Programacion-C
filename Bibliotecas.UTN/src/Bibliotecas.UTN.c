/*
 ============================================================================
 Name        : UTN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int respuesta;

	respuesta=utn_getNumero(&numero,"NUMERO?","ERROR", 2,10,3);
	if(respuesta==1)
	{
		printf("El numero es: %d", numero);
	}else
	{
		printf("Dato incorrecto");
	}
	return EXIT_SUCCESS;
}
