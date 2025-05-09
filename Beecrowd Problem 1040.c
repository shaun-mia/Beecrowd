#include <stdio.h>

int main() {
    double a, b, c, d, media, exame;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10.0;
    printf("Media: %.1f\n", media);
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame) / 2.0;
        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    return 0;
}