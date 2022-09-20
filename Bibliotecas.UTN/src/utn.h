/*
 * utn.h
 *
 *  Created on: 17 sep. 2022
 *      Author: nico9
 */

#ifndef UTN_H_
#define UTN_H_
int myGets(char array[], int longitud);
int getInt (int *resultado);
int validarSolosNumeros (char array[]);
int getString (char array []);
int validarSoloLetras(char array[]);
int utn_getNumero(int* resultado,char* mensaje,char*mensajeError,int minimo, int maximo, int reintentos);
int utn_getCaracter(char* resultado,char* mensaje,char*mensajeError,char minimo, char maximo, int reintentos);

#endif /* UTN_H_ */

