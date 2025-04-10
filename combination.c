#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Taking input from the user
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    // Calculating and printing nCr
    printf("nCr (%dC%d) = %d\n", n, r, nCr(n, r));

    return 0;
}
