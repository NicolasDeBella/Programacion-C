/*
 ============================================================================
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no
 exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		setbuf(stdout,NULL);
		int numeroUno;
		int numeroDos;
		int numeroTres;

		printf("Ingrese un numero: ");
		scanf("%d", &numeroUno);
		printf("Ingrese un numero: ");
		scanf("%d", &numeroDos);
		printf("Ingrese un numero: ");
		scanf("%d", &numeroTres);



		if(numeroUno>numeroDos && numeroUno<numeroTres)
		{
			printf("%d",numeroUno);
		}
		else
		{
			if(numeroDos>numeroUno && numeroDos<numeroTres)
			{
				printf("%d",numeroDos);
			}
			else
			{
				if(numeroTres>numeroUno && numeroTres<numeroDos)
				{
					printf("%d",numeroTres);
				}else
				{
					printf("No existe");
				}
			}
		}




	return 0;


		return 0;
}

	printf("%d",resultado);


	return EXIT_SUCCESS;
}
