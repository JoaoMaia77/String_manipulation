#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRINGS 100
#define MAX_STR_LEN 100

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        char c1 = tolower(*str1);
        char c2 = tolower(*str2);
        if (c1 != c2) {
            return c1 - c2;
        }
        str1++;
        
        str2++;
    }
    return *str2 - *str1;
}

int main() {
    int N;
    char *strings[MAX_STRINGS];
    if (scanf("%d", &N) != 1 || N < 1 || N > MAX_STRINGS) {
        return 1;
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);


    for (int i = 0; i < N; i++) {
        strings[i] = malloc(MAX_STR_LEN * sizeof(char));
        if (!fgets(strings[i], MAX_STR_LEN, stdin)) {
            return 1;
        }
        strings[i][strcspn(strings[i], "\n")] = 0;
    }

    const char *maiorComprimento = strings[0];
    for (int i = 1; i < N; i++) {
        if (strlen(strings[i]) > strlen(maiorComprimento)) {
            maiorComprimento = strings[i];
        }
    }

    const char *menorLexicografica = strings[0];
    for (int i = 1; i < N; i++) {
        if (compareStrings(strings[i], menorLexicografica) < 0) {
            menorLexicografica = strings[i];
        }
    }

    printf("%s\n", maiorComprimento);
    printf("%s\n", menorLexicografica);

    for (int i = 0; i < N; i++) {
        free(strings[i]);
    }

    return 0;
}
