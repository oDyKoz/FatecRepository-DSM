#include <stdio.h>

int main() {
    int idade;
    idade = 20; // Atribuição de variável
    int fator = 5;
    int soma = idade + fator;

    printf("idade: %d\n", idade); // Print do valor da variavel idade
    printf("Soma: %d\n", soma); // Print do valor da variavel soma com soma atribuida
    printf("Soma: %d\n", idade + fator); // Print de soma inline
    // Restante das fatores matématicos: + (mais), - (atribuição), / (divisão), * (multiplicação).

    //Atribuição composto
    soma += fator; // -= , *= , /=

    printf("Soma: \n", soma);


    return 0;
}