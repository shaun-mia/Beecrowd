#include <stdio.h>

int main() {
    int n, pos = 0, menor;
    scanf("%d", &n);
    int x[n];
    scanf("%d", &x[0]);
    menor = x[0];
    for (int i = 1; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[i] < menor) {
            menor = x[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    return 0;
}