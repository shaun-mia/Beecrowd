#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int val = i < j ? i : j;
                val = val < n - i + 1 ? val : n - i + 1;
                val = val < n - j + 1 ? val : n - j + 1;
                printf("%3d", val);
                if (j < n) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}