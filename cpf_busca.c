#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort com long long
int comparar_long(const void *a, const void *b) {
    long long val1 = *(const long long*)a;
    long long val2 = *(const long long*)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

// Função de busca binária para long long
int busca_binaria_cpf(long long vetor[], int tamanho, long long alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == alvo) {
            return meio; // CPF encontrado
        }
        if (vetor[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1; // CPF não encontrado
}

int main() {
    // Lista de CPFs (exemplo, não são reais). Devem estar ordenados para a busca binária.
    long long cpfs_cadastrados[] = {
        11122233344, 22233344455, 23456789012, 33344455566,
        44455566677, 45678901234, 55566677788, 66677788899,
        77788899900, 88899900011, 98765432100, 99900011122
    };
    int n_cpfs = sizeof(cpfs_cadastrados) / sizeof(cpfs_cadastrados[0]);

    // Opcional: se a lista não estivesse ordenada, faríamos:
    // qsort(cpfs_cadastrados, n_cpfs, sizeof(long long), comparar_long);

    printf("Sistema de Verificação de CPF\n");
    printf("Base de dados contém %d CPFs cadastrados.\n\n", n_cpfs);

    long long cpf_busca;
    printf("Digite o CPF a ser verificado (apenas números): ");
    scanf("%lld", &cpf_busca);

    int indice = busca_binaria_cpf(cpfs_cadastrados, n_cpfs, cpf_busca);

    printf("\n--- Resultado da Verificação ---\n");
    if (indice != -1) {
        printf("O CPF %lld foi encontrado na nossa base de dados.\n", cpf_busca);
    } else {
        printf("O CPF %lld NÃO consta na nossa base de dados.\n", cpf_busca);
    }

    return 0;
}
