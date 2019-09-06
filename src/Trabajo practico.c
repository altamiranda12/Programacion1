#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void)
{
	char seguir='s';
	int opcion=0;
	int numero1=0;
	int numero2=0;
	int resultadosuma;
	int resultadoresta;
	int resultadodivision;
	int resultadomulti;
	int resultadofactorial;

	while(seguir=='s'){
		printf("------------menu----------------\n");
		printf("\n1-Ingresar 1er operando(A=%d)\n", numero1);
		printf("2-Ingresar 2do operando (B=%d)\n",numero2);
		printf("3-Calcular\n");
		printf("4- mostrar los resultados\n");
		printf("5-salir del programa \n");
		printf("\nselecione la opcion deseada: ");
		scanf("%d",&opcion);
		switch(opcion){
		case 1 :
		printf("Ingrese numero1: ");
		scanf("%d",&numero1);
		break;
		case 2 :
		printf("Ingrese numero2: ");
		scanf("%d",&numero2);
		break;
		case 3:
		resultadosuma=sumar(numero1,numero2);
		resultadoresta=restar(numero1,numero2);
		resultadomulti=multiplicar(numero1,numero2);
		resultadodivision=dividir(numero1,numero2);
		resultadofactorial=factorial(numero1);
		break;
		case 4 :
		printf("\nLa suma es  :%d",resultadosuma);
		printf("\nLa resta es :%d",resultadoresta);
		printf("\nLa multiplicacion es :%d",resultadomulti);
		printf("\nLa division es :%d",resultadodivision);
		printf("\nEl factorial es :%d\n\n",resultadofactorial);
		break;
		case 5 :
		seguir= 'n';
		break;

		}

	}return 0 ;
}
