#include <stdio.h>

int main() {
    int i, j;
    for (i = 7; i >= 1; i -= 2) {
        for (j = i; j <= 7; j += 2) {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}