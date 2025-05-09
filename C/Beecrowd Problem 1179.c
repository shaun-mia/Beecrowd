#include <stdio.h>

int main() {
    int par[5], impar[5], p = 0, i = 0, x;
    for (int j = 0; j < 15; j++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            par[p++] = x;
            if (p == 5) {
                for (int k = 0; k < 5; k++) printf("par[%d] = %d\n", k, par[k]);
                p = 0;
            }
        } else {
            impar[i++] = x;
            if (i == 5) {
                for (int k = 0; k < 5; k++) printf("impar[%d] = %d\n", k, impar[k]);
                i = 0;
            }
        }
    }
    for (int k = 0; k < i; k++) printf("impar[%d] = %d\n", k, impar[k]);
    for (int k = 0; k < p; k++) printf("par[%d] = %d\n", k, par[k]);
    return 0;
}