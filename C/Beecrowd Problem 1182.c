#include <stdio.h>

int main() {
    double m[12][12], sum = 0;
    int c;
    char op;
    scanf("%d %c", &c, &op);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
    for (int i = 0; i < 12; i++)
        sum += m[i][c];
    if (op == 'S') printf("%.1f\n", sum);
    else printf("%.1f\n", sum / 12.0);
    return 0;
}