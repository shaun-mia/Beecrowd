#include <stdio.h>

int main() {
    int n, code, qty;
    double total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &code, &qty);
        if (code == 1001) total += qty * 1.50;
        else if (code == 1002) total += qty * 2.50;
        else if (code == 1003) total += qty * 3.50;
        else if (code == 1004) total += qty * 4.50;
        else if (code == 1005) total += qty * 5.50;
    }
    printf("%.2f\n", total);
    return 0;
}