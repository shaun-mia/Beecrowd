#include <stdio.h>

int main() {
    int n, x, total = 0, c = 0, r = 0, s = 0;
    char type;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x, &type);
        total += x;
        if (type == 'C') c += x;
        else if (type == 'R') r += x;
        else if (type == 'S') s += x;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (double)c / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (double)r / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (double)s / total * 100);
    return 0;
}