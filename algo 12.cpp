#include <stdio.h>


int main() {
	
	
	
int numero;

printf("Digite um Número:");
scanf("%d",&numero);

  if(numero > 0){
		printf("Numero par"); 
	} else if (numero < 0){
		printf("Numero ímpar");
	} else {	
		printf("Nulo");  
  	}	
}

