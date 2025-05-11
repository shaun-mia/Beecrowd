#include <stdio.h>

int main() {
    int m, n, sum;
    while (scanf("%d %d", &m, &n) && (m > 0 && n > 0)) {
        if (m > n) { int temp = m; m = n; n = temp; }
        sum = 0;
        for (int i = m; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}