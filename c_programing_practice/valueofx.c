#include <stdio.h>

int main() {
    double a, b, c, x;

    // Prompt the user to enter values for a, b, and c
    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

    // Check if the denominator (b - c) is zero to avoid division by zero
    if (b - c != 0) {
        x = a / (b - c);
        printf("x = %lf\n", x);
    } else {
        printf("Division by zero is not allowed. (b - c) is zero.\n");
    }

    return 0;
}
