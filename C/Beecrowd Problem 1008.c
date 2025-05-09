#include <stdio.h>

int main() {
    int numero, horas;
    double valor, salario;
    scanf("%d %d %lf", &numero, &horas, &valor);
    salario = horas * valor;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
    return 0;
}