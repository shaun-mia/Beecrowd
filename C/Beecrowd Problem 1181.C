#include <stdio.h>

int main() {
    double m[12][12], sum = 0;
    int l;
    char op;
    scanf("%d %c", &l, &op);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
    for (int j = 0; j < 12; j++)
        sum += m[l][j];
    if (op == 'S') printf("%.1f\n", sum);
    else printf("%.1f\n", sum / 12.0);
    return 0;
}