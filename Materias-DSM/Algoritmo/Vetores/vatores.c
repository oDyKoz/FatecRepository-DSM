#include <stdio.h>

int funcaoExemplo1() {
        // Criando o vetor de 5 indices
    int vetor[5];

    // Atribuindo um valor para um indice especifico
    vetor[3] = 5;

    // Atribuindo valores para diversos indices
    //          0,1,2,3,4,5 - Vetores
    vetor[5] = {1,2,3,4,5,6};

    int indice;
    for (indice = 0; indice < 5; indice++) {
        printf("Digite um numero: ");
        scanf("%d\n", &vetor[indice]);
    }

    // SizeOf retorna o valor em bytes de cada vetor ou variavel.

    /* 
    A variavel tamanho aramazena a divisão feita dos vetores. Nessa divisão o primeiro valor
    coleta o byte do vetor INTEIRO (ex: 50) e divide por pelo um vetor UNICO (ex: 10).
    Portanto, se caso um vetor possuir 50 de byte total e cada vetor possuir 10, o resultado
    é 5 e é armazenado na variavel tamanho.
    
    tamanho = 50 / 10;
    tamanho = 5;

    Realizando esse calculo, deixe o código mais dinamico e ao favor do programador, facilitando
    códigos futuros.
    */
   
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (indice = 0; indice < tamanho; indice++){
        printf("%d\n", &vetor[indice]);
    }
}

int funcaoExemplo2() {
    // Declaração de variavel inteira
    int quantidade;
    int soma;

    // Ler o valor da variavel 'quantidade'
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    // Declara o vetor 'notas'
    int notas[quantidade];

    // Delcara a variavel inteira
    int indice;
    // Ler as posições de vetor 'notas'
    for(indice = 0;indice < quantidade;indice++) {
        printf("Digite a nota [%d]:", indice + 1);
        scanf("%d", &notas[indice]);

        soma = soma + notas[indice];
    }

    // Calculo da média
    double media = soma / (float) quantidade;

    // Exibie o valor da variavel 'media' com 2 casas decimais.
    printf("Media: %.2f\n", media);
}

int main () {
   // funcaoExemplo1();
   funcaoExemplo2();

    return 0;
}