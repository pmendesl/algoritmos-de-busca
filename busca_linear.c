#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar a busca linear
int busca_linear(int vetor[], int tamanho, int alvo, int *passos) {
    *passos = 0; // Inicializa o contador de passos
    for (int i = 0; i < tamanho; i++) {
        (*passos)++; // Incrementa o contador a cada comparação
        if (vetor[i] == alvo) {
            return i; // Retorna o índice se encontrar o elemento
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int codigos_produto[30];
    srand(time(NULL)); // Semente para geração de números aleatórios

    printf("Vetor de Códigos de Produto (desordenado):\n");
    for (int i = 0; i < 30; i++) {
        codigos_produto[i] = 1000 + rand() % 9000; // Gera códigos de 4 dígitos
        printf("%d ", codigos_produto[i]);
    }
    printf("\n\n");

    int codigo_busca;
    printf("Digite o código do produto a ser buscado: ");
    scanf("%d", &codigo_busca);

    int passos = 0;
    int indice = busca_linear(codigos_produto, 30, codigo_busca, &passos);

    if (indice != -1) {
        printf("\nBusca Linear:\n");
        printf("Código %d encontrado no índice %d.\n", codigo_busca, indice);
    } else {
        printf("\nBusca Linear:\n");
        printf("Código %d não encontrado no catálogo.\n", codigo_busca);
    }
    printf("Número de passos (iterações): %d\n", passos);

    return 0;
}
