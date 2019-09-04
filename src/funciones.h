

float sumar(float a, float b){
	float resultado;
	resultado = a+b;
	return resultado;
}
float restar(float a, float b){
	float resultado;
	resultado = a-b;
	return resultado;
}
float multiplicar(float a, float b){
	float resultado;
	resultado = a*b;
	return resultado;
}
float dividir(float a, float b){
	float resultado;
			while(b<0 || b==0){
				printf("Error. ingrese otro numero mayor a 0 : ");
				scanf("%f",&b);
			}
	resultado=a/b;
	return resultado;
}
int factorial (int a){
	int resultado;
	  int factorial;
	  	  	  factorial=1;
	  	  	  while(a<0 || a==0){
	  	  		  printf("Error. Ingrese un numero entero: ");
	  	  		  scanf("%d",&a);
	  	  	  }
	   for(int i=1;i<=a;i++){
	        factorial = factorial * i;}


	   	   resultado=factorial;
	return resultado;

}
