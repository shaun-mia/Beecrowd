#include <stdio.h>

int main() {
    int t, n;
    long long fib[61];
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i <= 60; i++) fib[i] = fib[i-1] + fib[i-2];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
    return 0;
}