String Manipulation em C
Este programa demonstra manipulação básica de strings em C, incluindo:

Leitura de várias strings da entrada padrão.
Alocação dinâmica de memória para armazenar as strings.
Comparação de strings sem distinção entre maiúsculas e minúsculas.
Determinação da string de maior comprimento.
Encontrar a menor string em ordem lexicográfica.
Impressão dos resultados.
Como usar:
Compile o código usando um compilador C (por exemplo, gcc string_manipulation.c -o string_manipulation).
Execute o programa: ./string_manipulation
Insira o número de strings que você deseja comparar.
Digite cada string, pressionando Enter após cada uma.
O programa imprimirá a string mais longa e a menor em ordem lexicográfica.
Exemplo:

3 
Abacate
Banana
Maçã
Saída:

Abacate
Banana
Observações:

O programa utiliza alocação dinâmica de memória (malloc) para lidar com strings de diferentes tamanhos.
A função compareStrings realiza a comparação lexicográfica, convertendo todos os caracteres para minúsculas para garantir que a comparação ignore maiúsculas/minúsculas.
O Que o Código Faz (Explicação Detalhada)
Inclusão de Bibliotecas:

stdio.h: Para operações de entrada e saída (printf, scanf).
stdlib.h: Para alocação de memória dinâmica (malloc, free) e outras funções utilitárias.
string.h: Para manipulação de strings (strlen, strcspn).
ctype.h: Para conversão de caracteres (tolower).
Definição de Constantes:

MAX_STRINGS: Limita o número máximo de strings que podem ser lidas.
MAX_STR_LEN: Limita o comprimento máximo de cada string.
Função compareStrings:

Recebe duas strings como parâmetros.
Itera sobre os caracteres de ambas as strings simultaneamente.
Converte cada caractere para minúscula usando tolower.
Compara os caracteres em minúscula. Se forem diferentes, retorna a diferença entre seus valores ASCII (determinando a ordem lexicográfica).
Se as strings forem idênticas até o final de uma delas, retorna a diferença entre os caracteres restantes (para lidar com strings de comprimentos diferentes).
Função main:

Lê um inteiro N do usuário (o número de strings a serem lidas).
Verifica se N está dentro dos limites válidos.
Descarta qualquer caractere restante na linha de entrada (como o \n após o número).
Aloca memória dinamicamente para um array de strings (strings).
Lê cada string do usuário usando fgets e remove o caractere de nova linha (\n).
Encontra a Maior e a Menor String:

Inicializa maiorComprimento e menorLexicografica com a primeira string.
Itera sobre as demais strings, comparando o comprimento e a ordem lexicográfica com as variáveis de referência.
Atualiza as variáveis se encontrar strings maiores ou lexicograficamente menores.
Impressão dos Resultados:

Imprime a string de maior comprimento e a menor string em ordem lexicográfica.
Liberação de Memória:

Libera a memória alocada dinamicamente para cada string usando free.
