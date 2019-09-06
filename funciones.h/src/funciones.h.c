

int sumar(int a, int b){
	int resultado;
	resultado = a+b;
	return resultado;
}
int restar(int a, int b){
	int resultado;
	resultado = a-b;
	return resultado;
}
int multiplicar(int a, int b){
	int resultado;
	resultado = a*b;
	return resultado;
}
int dividir(int a, int b){
	int resultado;
			while(b<0 || b==0){
				printf("Error. ingrese otro numero mayor a 0 : ");
				scanf("%d",&b);
			}
	resultado=a/b;
	return resultado;
}
int factorial (int a){
	int resultado;
	  int factorial;
	  	  	  factorial=1;
	   for(int i=1;i<=a;i++){
	        factorial = factorial * i;}


	   	   resultado=factorial;
	return resultado;

}
