#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void)
{
	char seguir='s';
	int opcion=0;
	float numero1=0;
	float numero2=0;
	float resultadosuma;
	float resultadoresta;
	float resultadodivision;
	float resultadomulti;
	int resultadofactorial;

	while(seguir=='s'){

		printf("\n1-Ingresar 1er operando(A=%f)\n", numero1);
		printf("2-Ingresar 2do operando (B=%f)\n",numero2);
		printf("3-Calcular\n");
		printf("4- mostrar los resultados\n");
		printf("5-salir del programa \n");
		printf("\nselecione la opcion deseada: ");
		scanf("%d",&opcion);
		switch(opcion){
		case 1 :
		printf("Ingrese numero1: ");
		scanf("%f",&numero1);
		break;
		case 2 :
		printf("Ingrese numero2: ");
		scanf("%f",&numero2);
		break;
		case 3:
		resultadosuma=sumar(numero1,numero2);
		resultadoresta=restar(numero1,numero2);
		resultadomulti=multiplicar(numero1,numero2);
		resultadodivision=dividir(numero1,numero2);
		resultadofactorial=factorial(numero1);
		break;
		case 4 :
		printf("\nLa suma es  :%f",resultadosuma);
		printf("\nLa resta es :%f",resultadoresta);
		printf("\nLa multiplicacion es :%f",resultadomulti);
		printf("\nLa division es :%f",resultadodivision);
		printf("\nEl factorial es :%d\n\n",resultadofactorial);
		break;
		case 5 :
		seguir= 'n';
		break;

		}

	}return 0 ;
}
