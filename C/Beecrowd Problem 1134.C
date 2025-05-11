#include <stdio.h>

int main() {
    int code, a = 0, g = 0, d = 0;
    while (scanf("%d", &code) && code != 4) {
        if (code == 1) a++;
        else if (code == 2) g++;
        else if (code == 3) d++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}