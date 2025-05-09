#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != ','; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',') {
            for (int j = i + 1; str[j] != '\0'; j++) {
                printf("%c", str[j]);
            }
            break;
        }
    }
    printf("\n");
    return 0;
}