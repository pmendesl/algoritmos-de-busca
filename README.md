Pedro Mendes
Leonardo Augusto
Alexandre
Guilherme Peres

Algoritmos de Busca em C

Este repositório contém implementações de algoritmos de busca fundamentais em C, como parte de um exercício prático de estruturas de dados e algoritmos.

Descrição dos Algoritmos

Busca Linear vs. Busca Binária

A Busca Linear é o método de busca mais simples. Ela percorre sequencialmente cada elemento de uma coleção (como um vetor) desde o início até o fim, comparando cada um com o valor alvo.
- Vantagem: Funciona em coleções desordenadas.
- Desvantagem: É ineficiente para grandes volumes de dados, com complexidade de tempo de O(n) no pior caso.

A Busca Binária é um algoritmo muito mais eficiente, mas exige que a coleção esteja previamente ordenada. Ela funciona dividindo repetidamente a porção de busca da coleção pela metade até que o valor alvo seja encontrado ou o espaço de busca se esgote.
- Vantagem: Extremamente rápida para grandes volumes de dados, com complexidade de tempo de O(log n).
- Desvantagem: Requer que os dados estejam ordenados.

Arquivos no Repositório

- `busca_linear.c`: Demonstra a busca de um código de produto em um vetor desordenado.
- `busca_binaria.c`: Ordena o mesmo vetor de códigos e aplica a busca binária, comparando a eficiência.
- `agenda_busca.c`: Implementa buscas linear (case-insensitive) e binária (case-sensitive) em um vetor de nomes.
- `limiar_sensor.c`: Implementa uma variação da busca binária (`lower_bound`) para encontrar o primeiro valor maior ou igual a um alvo em um vetor de leituras de sensor.

Como Compilar e Executar

Você pode compilar os arquivos usando um compilador C como o GCC.

```bash
# Para compilar o programa de busca linear
gcc busca_linear.c -o busca_linear

# Para executar
./busca_linear
```

```bash
# Para compilar o programa de busca binária
gcc busca_binaria.c -o busca_binaria

# Para executar
./busca_binaria
```

```bash
# Para compilar o programa da agenda
gcc agenda_busca.c -o agenda_busca

# Para executar
./agenda_busca
```

```bash
# Para compilar o programa de limiar de sensor
gcc limiar_sensor.c -o limiar_sensor

# Para executar
./limiar_sensor
```

Observações: Quando Usar Cada Técnica

- Use a Busca Linear quando:
  - A coleção de dados é pequena.
  - A coleção não está ordenada e o custo de ordená-la é maior do que o benefício da busca rápida (por exemplo, se você for realizar poucas buscas).
  - A simplicidade do código é uma prioridade.

- Use a Busca Binária quando:
  - A coleção de dados é grande.
  - A coleção já está ordenada ou será buscada múltiplas vezes, justificando o custo inicial da ordenação.
  - O desempenho da busca é crítico.
