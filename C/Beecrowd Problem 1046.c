#include <stdio.h>

int main() {
    int h1, h2;
    scanf("%d %d", &h1, &h2);
    int h = (h2 <= h1) ? (h2 + 24 - h1) : (h2 - h1);
    printf("O JOGO DUROU %d HORA(S)\n", h);
    return 0;
}