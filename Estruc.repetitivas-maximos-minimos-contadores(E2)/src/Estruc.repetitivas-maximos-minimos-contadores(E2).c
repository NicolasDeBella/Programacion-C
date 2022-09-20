/*
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeros;
	int i;
	int contador=0;
	int contadorPares=0;
	int contadorImpares=0;
	int menorNum=0;
	int mayorPar=0;
	int acumuladorPositivos=0;
	int acumuladorNegativos=0;
	int productoNegativos;
	int contadorNegativos=0;





	for (i=0;i<10;i++)
	{
		contador++;
		printf("Ingrese un numero: ");
		scanf("%d",&numeros);



		if (numeros%2==0)
		{
			contadorPares++;
		}else
		{
			contadorImpares++;
		}



		if(contador==1)
		{
			menorNum=numeros;

		}else
		{
			if(menorNum>numeros)
			{
				menorNum=numeros;
			}
		}

		if(contadorPares==1)
		{
			mayorPar=numeros;
		}else
		{
			if(mayorPar<numeros)
			{
				mayorPar=numeros;
			}
		}

		if(numeros>=0)
		{
			acumuladorPositivos=acumuladorPositivos+numeros;
		}
		else
		{
			acumuladorNegativos=acumuladorNegativos+numeros;
			contadorNegativos++;
		}



	}

	productoNegativos=acumuladorNegativos*contadorNegativos;

	printf("La cantidad de numeros pares es %d \n",contadorPares);
	printf("La cantidad de numeros impares es %d \n",contadorImpares);
	printf("El mayor numero par es %d \n",mayorPar);
	printf("El menor numero ingresado es %d \n",menorNum);
	printf("La suma de los numeros positivos es %d \n",acumuladorPositivos);
	printf("El producto de los numeros negativos es %d \n",productoNegativos);
	return 0;
}
