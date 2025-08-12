#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para o qsort
int comparar_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função para realizar a busca binária
int busca_binaria(int vetor[], int tamanho, int alvo, int *passos) {
    *passos = 0;
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        (*passos)++; // Incrementa o contador a cada iteração do loop
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == alvo) {
            return meio; // Encontrou o alvo
        }
        if (vetor[meio] < alvo) {
            esquerda = meio + 1; // Busca na metade direita
        } else {
            direita = meio - 1; // Busca na metade esquerda
        }
    }
    return -1; // Alvo não encontrado
}

int main() {
    int codigos_produto[30];
    srand(time(NULL));

    // Gera e exibe o vetor desordenado
    printf("Vetor de Códigos de Produto (original desordenado):\n");
    for (int i = 0; i < 30; i++) {
        codigos_produto[i] = 1000 + rand() % 9000;
        printf("%d ", codigos_produto[i]);
    }
    printf("\n\n");

    // Ordena o vetor usando qsort
    qsort(codigos_produto, 30, sizeof(int), comparar_int);

    printf("Vetor de Códigos de Produto (ordenado):\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", codigos_produto[i]);
    }
    printf("\n\n");

    int codigo_busca;
    printf("Digite o código do produto a ser buscado: ");
    scanf("%d", &codigo_busca);

    int passos = 0;
    int indice = busca_binaria(codigos_produto, 30, codigo_busca, &passos);

    if (indice != -1) {
        printf("\nBusca Binária:\n");
        printf("Código %d encontrado no índice %d.\n", codigo_busca, indice);
    } else {
        printf("\nBusca Binária:\n");
        printf("Código %d não encontrado no catálogo.\n", codigo_busca);
    }
    printf("Número de passos (iterações): %d\n", passos);

    return 0;
}
