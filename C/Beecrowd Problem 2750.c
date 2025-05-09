#include <stdio.h>

int main() {
    int a[16], i;
    for (i = 0; i < 16; i++) scanf("%d", &a[i]);
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    for (i = 0; i < 16; i++)
        printf("|%7d  |%5o    |%8X       |\n", a[i], a[i], a[i]);
    printf("---------------------------------------\n");
    return 0;
}