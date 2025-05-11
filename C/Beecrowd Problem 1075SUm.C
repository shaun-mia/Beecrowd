#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 13 != 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}