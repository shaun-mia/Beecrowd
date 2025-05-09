#include <stdio.h>

int main() {
    int valor, notas[7] = {100, 50, 20, 10, 5, 2, 1}, qtd;
    scanf("%d", &valor);
    printf("%d\n", valor);
    for (int i = 0; i < 7; i++) {
        qtd = valor / notas[i];
        printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
        valor %= notas[i];
    }
    return 0;
}