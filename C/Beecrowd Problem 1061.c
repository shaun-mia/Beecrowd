#include <stdio.h>

int main() {
    int d1, h1, m1, s1, d2, h2, m2, s2, t1, t2, t, d, h, m, s;
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    t1 = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    t2 = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;
    t = t2 - t1;
    d = t / 86400; t %= 86400;
    h = t / 3600; t %= 3600;
    m = t / 60; t %= 60;
    s = t;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
    return 0;
}