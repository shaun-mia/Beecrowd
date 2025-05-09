#include <stdio.h>

int main() {
    int n, x[2001] = {0}, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &j);
        x[j]++;
    }
    for (i = 0; i <= 2000; i++) {
        if (x[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, x[i]);
        }
    }
    return 0;
}