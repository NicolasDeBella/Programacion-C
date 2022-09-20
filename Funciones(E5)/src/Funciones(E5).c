/*
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);
 */

#include <stdio.h>
#include <stdlib.h>
int sumarUno (int numero1, int numero2);
int sumarDos(void);
void sumarTres(int numeroUno, int numeroDos);
void sumarCuatro(void);


int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int suma;
	int operacionSumaDos;


;


	printf("Ingresar primer numero: ");
	scanf("%d",&numeroUno);
	printf("Ingresar segundo numero: ");
	scanf("%d",&numeroDos);

	suma=sumarUno(numeroUno,numeroDos);
	printf("La suma es: %d",suma);

	operacionSumaDos=sumarDos();
	printf("El resultado de la operacion sumarDos  es: %d",operacionSumaDos);

	sumarTres(numeroUno,numeroDos);

	sumarCuatro();



}

int sumarUno (int numero1, int numero2)
{
	int resultado;
	resultado=numero1+numero2;
	return resultado;
}
int sumarDos(void)
{
	int operadorUno;
	int operadorDos;
	int resultadoSuma;
	printf("\nIngrese el primer numero: ");
	scanf("%d",&operadorUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&operadorDos);


	resultadoSuma=operadorUno+operadorDos;
	return resultadoSuma;
}

void sumarTres(int numeroUno, int numeroDos)
{

	int suma;
	suma=numeroUno+numeroDos;
	printf("\nLa suma de sumarTres es: %d",suma);

}

void sumarCuatro(void)
{
	int operadorUno;
	int operadorDos;
	int suma;
	printf("\nIngrese el primer numero: ");
	scanf("%d",&operadorUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&operadorDos);


	suma=operadorUno+operadorDos;
	printf("\nLa suma de sumarCuatro es: %d",suma);
}
