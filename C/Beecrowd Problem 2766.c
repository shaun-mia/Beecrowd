#include <stdio.h>

int main() {
    char linha[100];
    for (int i = 0; i < 5; i++) {
        scanf(" %[^\n]s", linha);
        if (i == 1 || i == 2 || i == 4) {
            printf("%s\n", linha);
        }
    }
    return 0;
}