#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) printf("NULL\n");
        else if (x % 2 == 0) printf("%s\n", x > 0 ? "EVEN POSITIVE" : "EVEN NEGATIVE");
        else printf("%s\n", x > 0 ? "ODD POSITIVE" : "ODD NEGATIVE");
    }
    return 0;
}