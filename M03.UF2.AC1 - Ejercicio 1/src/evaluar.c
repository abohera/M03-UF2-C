#include <stdio.h>
#include "evaluar.h"

int numero(){
	int n;
	do{
		printf("Introduce un número: ");
		scanf("%d", &n);
	}while(n < 0);
	return n;
}

void evaluacion(int num){
	int i, aux=0;
	for(i=1; i <= num; i++){
		if(num % i == 0){
			aux++;
		}
	}
	print(aux);
}

void print(int a){
	if(a == 2){
			printf("El número introducido es primo");
		}
		else{
			printf("El número introducido no es primo, porque tiene más de 2 divisores");
		}
}
