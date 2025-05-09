#include <stdio.h>

int main() {
    int n, m, feedback;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &feedback);
            if (feedback == 1) printf("Rolien\n");
            else if (feedback == 2) printf("Naej\n");
            else if (feedback == 3) printf("Elehcim\n");
            else if (feedback == 4) printf("Odranoel\n");
        }
    }
    return 0;
}