String Manipulation em C 🔡
Este programa em C realiza manipulação básica de strings, permitindo que você:

Leia várias strings da entrada.
Compare strings, ignorando diferenças entre maiúsculas e minúsculas.
Encontre a string mais longa e a menor em ordem lexicográfica.
✨ Destaques:
Alocação Dinâmica: Gerencia memória de forma eficiente para strings de diferentes tamanhos.
Comparação Inteligente: Compara strings de forma justa, convertendo tudo para minúsculas.
Fácil de Usar: Interface simples e intuitiva para inserir e obter resultados.
🚀 Como Usar:
Compile:

sh
Copiar código
gcc string_manipulation.c -o string_manipulation
Execute:

sh
Copiar código
./string_manipulation
Informe o número de strings a comparar.

Digite cada string e pressione Enter.

🍎 Exemplo:
Entrada:
Copiar código
3
Abacate
Banana
Maçã
Saída:
scss
Copiar código
Abacate  (Maior comprimento)
Banana   (Menor lexicograficamente)
🛠️ Funcionamento Interno:
Bibliotecas: stdio.h, stdlib.h, string.h, ctype.h
Constantes: MAX_STRINGS, MAX_STR_LEN
Funções:
compareStrings: Compara strings em minúsculas.
main: Gerencia a leitura, comparação e impressão.
Observações:
O código utiliza malloc e free para alocação/liberação dinâmica de memória.
A função compareStrings é a chave para a comparação lexicográfica, convertendo caracteres para minúsculas antes de comparar.
