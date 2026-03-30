#include <stdio.h>

// Comentario em linha

/*
	Comenteario
  	em bloco
*/

int main(int argc, char** argv) {
	int numero = 0;
	
	do {
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &numero);
		
		if(numero <= 0){
			printf("Numero invalido\n");
		}
	} while(numero <= 0);
	
	printf("Numero digitado: %d\n", numero);
	printf("Numero dobrado: %d\n", numero * 2);	
	
	if(numero / 2) {
		printf("Numero par");
	} else {
		printf("Numero impar");
	}
	
	return 0;
}
