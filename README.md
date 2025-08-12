Pedro Mendes RM: 562242
Leonardo Augusto RM: 565564
Alexandre RM: 563346
Guilherme Peres RM: 563981


Algoritmos de Busca em C

Este repositório contém implementações de algoritmos de busca fundamentais em C, como parte de um exercício prático de estruturas de dados e algoritmos. O objetivo é demonstrar e comparar a busca linear e a busca binária em diferentes contextos.

Descrição Breve das Diferenças

A Busca Linear e a Busca Binária são dois métodos para encontrar um elemento em uma coleção, mas com abordagens e eficiências muito diferentes.

-  Busca Linear:
    -   Como funciona: Percorre a coleção elemento por elemento, do início ao fim, até encontrar o item desejado.
    -   Requisito: Nenhum. Funciona em dados ordenados ou desordenados.
    -   Eficiência: Lenta para grandes coleções. Sua complexidade de tempo é O(n), o que significa que o tempo de busca cresce linearmente com o número de elementos.

-   Busca Binária:
    -   Como funciona: "Divide para conquistar". A cada passo, compara o item alvo com o elemento do meio da coleção. Se não for igual, descarta metade da coleção e repete o processo na metade restante.
    -   Requisito: Exige que a coleção esteja ordenada.
    -   Eficiência: Extremamente rápida. Sua complexidade de tempo é O(log n), o que significa que ela pode encontrar um item em bilhões de elementos em poucas dezenas de comparações.

| Característica | Busca Linear | Busca Binária |
| :--- | :--- | :--- |
| **Pré-requisito** | N/A | Dados ordenados |
| **Complexidade (Pior Caso)** | O(n) | O(log n) |
| **Velocidade** | Lenta | Rápida |
| **Uso Ideal** | Listas pequenas ou desordenadas | Listas grandes e ordenadas |

Como Compilar e Executar

Para compilar e executar os arquivos, você precisará de um compilador C, como o GCC. Abra seu terminal, navegue até a pasta `algoritmos-de-busca/` e use os seguintes comandos:

1. Busca Linear (Catálogo de Produtos)
```bash
# Compilar
gcc busca_linear.c -o busca_linear

# Executar
./busca_linear
```

2. Busca Binária (Catálogo de Produtos Ordenado)
```bash
# Compilar
gcc busca_binaria.c -o busca_binaria

# Executar
./busca_binaria
```

3. Busca de CPF (em base ordenada)
```bash
# Compilar
gcc cpf_busca.c -o cpf_busca

# Executar
./cpf_busca
```

Observações sobre quando usar cada técnica

- Use a Busca Linear quando:
    -   A coleção de dados é pequena.
    -   A coleção não está ordenada e o custo de ordená-la (uma operação de O(n log n)) não compensa, especialmente se você for realizar poucas buscas.
    -   A simplicidade do código é mais importante que a performance.

-   Use a Busca Binária quando:
    -   A coleção de dados é grande.
    -   O desempenho da busca é crítico.
    -   A coleção já está ordenada ou será buscada múltiplas vezes, justificando o custo único de ordená-la no início. Exemplos clássicos incluem dicionários, listas telefônicas e bases de dados indexadas (como a de CPFs).
