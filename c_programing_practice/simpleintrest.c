#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simpleInterest;

    // Input principal amount, rate, and time
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    
    printf("Enter Rate of Interest (per year): ");
    scanf("%f", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
