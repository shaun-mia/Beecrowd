#include <stdio.h>

int main() {
    int n;
    double a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1f\n", (a * 2 + b * 3 + c * 5) / 10.0);
    }
    return 0;
}