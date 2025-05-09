#include <stdio.h>

int main() {
    int h1, m1, h2, m2, h, m;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t = (t2 < t1) ? (t2 + 1440 - t1) : (t2 - t1);
    h = t / 60;
    m = t % 60;
    printf("%d %d\n", h, m);
    return 0;
}