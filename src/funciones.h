
/**\brief Ingreso de dos datos por el usuario y devuelve por pantalla el resultado
	 *\param a : es un valor entero ingresado por el usuario
	 *\param b : es un valor entero ingresado por el usuario
	 *\ return devuelve la suma de las dos variables ingresadas por el usuario
	 */
int sumar(int a, int b){
	int resultado;
	resultado = a+b;
	return resultado;
}

/**\brief Ingreso de dos datos por el usuario y devuelve por pantalla el resultado
		 *\param a : es un valor entero ingresado por el usuario
		 *\param b : es un valor entero ingresado por el usuario
		 *\ return devuelve la resta de las dos variables ingresadas por el usuario
		 */
int restar(int a, int b){
	int resultado;
	resultado = a-b;
	return resultado;
}

/**\brief Ingreso de dos datos por el usuario y devuelve por pantalla el resultado
		 *\param a : es un valor entero ingresado por el usuario
		 *\param b : es un valor entero ingresado por el usuario
		 *\ return devuelve la multiplicacion de las dos variables ingresadas por el usuario
		 */

int multiplicar(int a, int b){
	int resultado;
	resultado = a*b;
	return resultado;
}

/**\brief Ingreso de dos datos por el usuario y devuelve por pantalla el resultado
		 *\param a : es un valor entero ingresado por el usuario
		 *\param b : es un valor entero ingresado por el usuario
		 *\while : es una validacion para poder realizar la division siempre y cuando la variable "b" sea mayor a 0
		 *\while : de lo contrario le pedimos al usuario que vuelva a ingresar otro valor
		 *\ return devuelve la division de las dos variables ingresadas por el usuario
		 */
int dividir(int a, int b){
	int resultado;
			while(b<0 || b==0){
				printf("Error. ingrese otro numero mayor a 0 : ");
				scanf("%d",&b);
			}
	resultado=a/b;
	return resultado;
}

/**\brief Ingreso de un dato por el usuario y devuelve por pantalla el resultado
	 *\param a : es un valor entero ingresado por el usuario
	 *\param factorial : Lo igualamos a 1 cuando el el param a es igual a 0
 	 *\ return devuelve el factorial de la variable "a"
	 */
int factorial (int a){
	int resultado;
	  int factorial;
	  	  	  factorial=1;
	  	  	  while(a<0 || a==0){
	  	  		  printf("Error. Ingrese un numero entero: ");
	  	  		  scanf("%d",&a);
	  	  	  }
	   for (int i=1;i<=a;i++){
	        factorial = factorial * i;}


	   	   resultado=factorial;
	return resultado;

}
