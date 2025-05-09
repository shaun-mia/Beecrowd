#include <stdio.h>

int main() {
    double x;
    int pos = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &x);
        if (x > 0) pos++;
    }
    printf("%d valores positivos\n", pos);
    return 0;
}