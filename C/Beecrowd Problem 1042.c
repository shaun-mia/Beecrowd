#include <stdio.h>

int main() {
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;
    if (x > y) { temp = x; x = y; y = temp; }
    if (x > z) { temp = x; x = z; z = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x, y, z, a, b, c);
    return 0;
}