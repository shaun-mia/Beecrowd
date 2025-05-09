#include <stdio.h>

int main() {
    double salary, tax = 0;
    scanf("%lf", &salary);
    if (salary <= 2000.0) {
        printf("Isento\n");
        return 0;
    }
    if (salary > 2000.0) {
        double t = (salary > 3000.0) ? 1000.0 : (salary - 2000.0);
        tax += t * 0.08;
    }
    if (salary > 3000.0) {
        double t = (salary > 4500.0) ? 1500.0 : (salary - 3000.0);
        tax += t * 0.18;
    }
    if (salary > 4500.0) {
        tax += (salary - 4500.0) * 0.28;
    }
    printf("R$ %.2f\n", tax);
    return 0;
}