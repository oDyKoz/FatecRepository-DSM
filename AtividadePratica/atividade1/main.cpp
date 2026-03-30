#include <stdio.h>

// Comentario em linha

/*
	Comenteario
  	em bloco
*/

int main(int argc, char** argv) {
	int numero = 0;
	float metade; // Define variavel com numero fluante

	// Loop DO WHILE defini e determina se a variavel numero tem numeros negativos ou neutro.
	do {
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &numero);
		
		if(numero <= 0){
			printf("Numero invalido\n");
		}
	} while(numero <= 0);

	// chama a variavel "metade" e armazena o numero dividido pela variavel "numero" inteiro e o numero float, retornando um numero do tipo float. 
	metade = numero / 2.0;
	
	printf("Numero digitado: %d\n", numero);
	printf("Numero dobrado: %d\n", numero * 2);	
	printf("Numero metade: %.2f \n", metade); // Delimita o numero float para printar somente com duas casas depois do ponto
	
	if((numero % 2) == 0) {
		printf("Numero par");
	} else {
		printf("Numero impar");
	}

	int tabuada;
	float(tabuada = 0; tabuada <= 11; tabuada++) {
		printf("%d X %d = %d\n", tabuada, numero, numero * tabuada);
	}
	
	return 0;
}
