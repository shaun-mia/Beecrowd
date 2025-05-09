#include <stdio.h>

int main() {
    int a, b;
    
    // Read two integers
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    
    // Check if either number is zero
    if (a == 0 || b == 0) {
        printf("Nao sao Multiplos\n");
        return 0;
    }
    
    // Check if numbers are multiples
    if (a % b == 0 || b % a == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}