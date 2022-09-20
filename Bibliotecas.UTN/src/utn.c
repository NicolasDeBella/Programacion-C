/*
 * utn.c
 *
 *  Created on: 17 sep. 2022
 *      Author: nico9
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


int myGets(char array[], int longitud)
{

		fflush(stdin);
		fgets(array,longitud,stdin);
		if(array[strlen(array)-1=='\n'])
		{
			array[strlen(array)-1]='\0';
		}

	return 0;
}

int getInt (int *resultado)
 {
	 int retorno=0;
	 char buffer[1000];

	 if(myGets(buffer,sizeof(buffer))==0 && validarSolosNumeros(buffer))
		 {
			 *resultado=atoi(buffer);
			 retorno=1;
		 }

	 return retorno;
 }

int validarSolosNumeros (char array[])
 {
	int retorno=1;
	int i;

	if (array != NULL && strlen(array) > 0)
	{	if(array[0]=='-')
		{
			i=1;
		}
		for(;i<strlen(array);i++)
		{
			if(array[i] < '0' || array[i] > '9' )
			{
				retorno=0;
				break;
			}
		}
	}

	return retorno;
 }

int getString (char array [])
  {
 	 int retorno=0;
 	 char buffer[1000];


 	 if(myGets(buffer,sizeof(buffer))==0 && validarSoloLetras(buffer))
 		 {
 		 	 strcpy(array,buffer);
 		 	 retorno=1;
 		 }

 	 return retorno;
  }


int validarSoloLetras(char array[])
{
	int retorno=1;
	int i=0;

	if (array != NULL && strlen(array) > 0)
	{
		for(i=0;i<strlen(array);i++)
		{
			if((array[i]!=' ')&& (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z') )
			{
				retorno=0;
				break;
			}

		}
	}
		return retorno;
}

int utn_getNumero(int* resultado,char* mensaje,char*mensajeError,int minimo, int maximo, int reintentos)
{
	int retorno=0;
	int bufferInt;
	if(resultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo>=maximo && reintentos>=0)
	{

		while(reintentos>0){
			printf("%s",mensaje);
			if(getInt(&bufferInt)==1)
			{
				if((bufferInt>=minimo && bufferInt<=maximo))
				{
					retorno=1;
					*resultado=bufferInt;
					break;
				}

			}
				reintentos--;
				printf("%s",mensajeError);

		}

	}
	return retorno;

}


int utn_getCaracter(char* resultado,char* mensaje,char*mensajeError,char minimo, char maximo, int reintentos)
{
	int retorno=0;
	char bufferChar;
	if(resultado!=NULL && mensaje!=NULL && mensajeError!=NULL && reintentos>=0)
	{

		while(reintentos>0){
			printf("%s",mensaje);
			if(getString(&bufferChar)==1)
			{
				if((bufferChar>=minimo && bufferChar<=maximo))
				{
					retorno=1;
					*resultado=bufferChar;
					break;
				}

			}
				reintentos--;
				printf("%s",mensajeError);

		}

	}
	return retorno;

}
